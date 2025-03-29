#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>


#define COUNT 100

int main(int argc, char ** argv){ 
    if(argc != 3){
        printf("Usage: %s path1 path2\n", argv[0]);
        exit(-1);
    }
    if(rename(argv[1], argv[2]) < 0) { 
        printf("Error !\n");
        exit(-2);
    }
    return 0;
}