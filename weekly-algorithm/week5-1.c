#include <stdio.h>

int main(){
    int n;
    int c=1;
    scanf("%d", &n);

    for (int i = 0; i < n+(n-1); i++){
        for (int j = 0; j < n+(n-1); j++){
            if (i<n){
                if(j >= c && j <= (n+n-2-c)){
                    printf(" ");
                }else{
                    printf("*");
                }
            }else{
                if(j >= (c-2) && j <= (n+n-c)){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
        } 

        if(i<n){
            c++;
        }else{
            c--;
        }
        
        printf("\n");
    }
    return 0;
}


