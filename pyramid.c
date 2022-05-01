#include <stdio.h>
int main(int argc, char *argv[]){
    int n=-1;
    while(n<1||n>8) {
        printf("input n between 1 and 8");
        scanf("%d",&n);
    }
    printf("%d",n);
    return 0;
}