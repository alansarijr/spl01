#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>

#define COUNT 100

int main(int argc, char* argv[]){

    char buffer[COUNT];
    if(argc != 3) {
        printf("Usage %s file1 file2\n", argv[1]);
        exit(-1);
    }
    int fd_src=open(argv[1], O_RDONLY);
    int fd_dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 644);
    if(fd_src < 0){
        printf("Cannot open file !\n");
        exit(-2);
    }
    int num_read;
    while ((num_read = read(fd_src,buffer,COUNT)) > 0){
        if(write(fd_dst, buffer, num_read) < 0){
            printf("error in coping !\n");
            exit(-3);
        }
    }

    return 0;
}