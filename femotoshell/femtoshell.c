#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>

const char* shell_name = "mosh";
#define MAX_SIZE 1000000 

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
            //my_echo(buffer + 5);
            printf("%s\n", buffer + 5);
        }else if (strcmp(buffer, "exit") == 0){ 
            printf("Good Bye!\n");
            break;
        }else {
            printf("Invalid command\n");
        }
    }
    return 0;
}