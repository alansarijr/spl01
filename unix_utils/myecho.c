#include <fcntl.h> 
#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int nflag = 1;

    if(argc > 1 && strcmp(argv[1], "-n") == 0){ 
        nflag = 0;
        argc--;
        argv++;
    }
    for (int i = 1; i < argc; i++) {
        write(1, argv[i], strlen(argv[i]));
        if(i != argc - 1){
            write(1, " ", 1);
        }
    }
    if(nflag){
        printf("\n");
    }
    return 0;
}