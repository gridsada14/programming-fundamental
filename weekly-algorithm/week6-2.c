#include <stdio.h>

int main(){
    float a=0; 
    float b=0;
    float std[10];
    for (int i = 0; i < 10; i++){
        scanf("%f", &std[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        b += std[i];    
    }
    float mean = b / 10;
    printf("%.2f", mean);
    return 0; 
}