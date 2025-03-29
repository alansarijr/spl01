#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 2){ 
        printf("Usage: %s <string>\n");
        exit(-1);
    }
    for (int i = 1; i < argc; i++) {
        write(1, argv[i], strlen(argv[i]));
        write(1, " ", 1);
    }
    write(1, "\n", 1);
    return 0;
}