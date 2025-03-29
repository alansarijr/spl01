#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>

#define COUNT 1024

int main(int argc, char ** argv) {
    char buffer[COUNT];
    if(argc != 1){
        printf("Usgae: %s", argv[0]);
        exit(-1);
    }
    if(getcwd(buffer, COUNT) != NULL){
        printf("%s\n", buffer);
    }else {
        perror("Error !\n");
        exit(-2);
    }
    return 0;
}