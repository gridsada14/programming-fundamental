#include <stdio.h>

int colNum;

int main() {
    int num;
    scanf("%d", &num);

    // Check odd or not
    if(num%2 == 1)
        colNum = num;
    else
        colNum = num - 1;
       
    // Loop create pattern
    for (int i = 0; i < num; i++){

        for (int j = 0; j < colNum; j++)
        {
            // left half
            if(i<(num/2)){
                if(j == (colNum/2)+i || j == (colNum/2)-i){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
            // Right half
            else{
                if(j == i - (num/2) || j == num-(i - (colNum/2-1))){
                    printf("*");
                }
                else{
                    printf("-");
                }
            }
        }
        
        printf("\n");
    }
    return 0;
}