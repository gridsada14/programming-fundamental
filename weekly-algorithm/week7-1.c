#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++){
        // Odd number case
        if(num%2 == 1){
            
            for (int j = 0; j < num; j++)
            {
                // Top half
                if(i<(num/2)){
                    if(j == (num/2)+i || j == (num/2)-i){
                        printf("*");
                    }
                    else{
                        printf("-");
                    }
                }
                // Down half
                else{
                    if(j == i - (num/2) || j == num-(i - (num/2-1))){
                        printf("*");
                    }
                    else{
                        printf("-");
                    }
                }
            }
            
        }
        // Not Odd number case 
        else{
            int notOddCol = num - 1;
            for (int j = 0; j < notOddCol; j++)
            {
                // Top half
                if(i<(num/2)){
                    if(j == (notOddCol)/2+i || j == (notOddCol)/2-i){
                        printf("*");
                    }
                    else{
                        printf("-");
                    }
                }
                // Down half
                else{
                    if(j == i - (num/2) || j == num-(i - (notOddCol/2-1))){
                        printf("*");
                    }
                    else{
                        printf("-");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}