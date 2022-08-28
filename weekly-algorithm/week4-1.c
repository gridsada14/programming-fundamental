#include <stdio.h>

int main(){
    int n;
    int c=0;
    scanf("%d", &n);

    for (int i = 0; i < n+(n-1); i++){
        if(i<n){
            for (int j = 0; j < n+(n-1); j++){
                if(j < c || j > (n+n-2-c)){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
            c++;
        }else{
            for (int j = 0; j < n+(n-1); j++){
                if(j<(c-2) || j>(n+n-c)){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
            c--;
        } 
        printf("\n");
    }
    return 0;
}

