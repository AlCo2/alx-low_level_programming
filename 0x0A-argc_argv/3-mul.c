#include <stdio.h>

int main(int argc, char** argv){
    if(argc<3){
        printf("Error");
        return 1;
    }
    int result = atoi(*argv[1]) * atoi(*argv[2]);
    printf("%d\n", result);
    return 0;
}