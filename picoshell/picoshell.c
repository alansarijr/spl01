#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

const char* shell_name = "mosh";
#define MAX_SIZE 2*1024 

int main(){
    char buffer[MAX_SIZE];
    while(1){
        printf("%s >",shell_name);
        fflush(stdin);
        if(fgets(buffer, MAX_SIZE, stdin) == NULL){
            break;
        }
        buffer[strcspn(buffer, "\n")] = '\0';
        if(*buffer == '\0'){
            continue;
        }else if(strncmp(buffer, "echo ", 5) == 0){
            printf("%s\n", buffer + 5);
        }else if (strcmp(buffer, "exit") == 0){ 
            printf("Good Bye!\n");
            break;
        }else if (strncmp(buffer, "cd ", 3) == 0){
            char *path = buffer + 3;
            if(chdir(path) == -1){
                perror("cd");
            }
        }else if (strncmp(buffer, "pwd", 3) == 0){
            char cwd[MAX_SIZE];
            if (getcwd(cwd, sizeof(cwd)) != NULL) {
                printf("%s\n", cwd);
            } else {
                perror("getcwd");
            }
        }else {
            pid_t pid;
            pid = fork();
            if(pid == -1){
                perror("fork");
                continue;
            }else if(pid == 0){
                char *args[MAX_SIZE];
                char *token = strtok(buffer," ");
                int i =0;
                while(token != NULL){
                    args[i] = token;
                    token = strtok(NULL, " ");
                    i++;
                }
                args[i] = NULL;
                if(execvp(args[0], args) == -1){
                    perror("execvp");
                    exit(EXIT_FAILURE);
                }
            }
            int status;
            if(wait(&status) == -1){
                perror("wait");
                continue;
            }
        }
    }
    return 0;
}