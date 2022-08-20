#include <stdio.h>

int main(){
    int a;
    int i,j = 0;
    scanf("%d", &a);

    while(i<a){
        while (j<a){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
        j=0;
    }

    return 0;
}