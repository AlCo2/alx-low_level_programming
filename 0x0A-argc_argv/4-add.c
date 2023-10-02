#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv){
    if(argc==1){
        printf("0\n");
        return 0;
    }
    if(!isdigit(*argv[1]) || !isdigit(*argv[2])){
        printf("Error\n");
        return 1;
    }
    int sum = atoi(*argv[1])+atoi(*argv[2]);
    printf("%d\n", sum);
    return 0;
}