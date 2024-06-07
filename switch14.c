#include <stdio.h>

int main(void){
    int special;
    int buffer;
    special = 4;
    printf("Number special? ");
    scanf("%d", &buffer);
    switch(buffer){
        case 1:
            printf("Wrong Number 1\n");
            break;
        case 2:
            printf("Wrong Number 2\n");
            break;
        case 3:
            printf("Wrong Number 3\n");
            break;
        case 4:
            printf("Ok Number 4\n");
            break;
        default:
            printf("Maximum -> 4\n");
    }
}
