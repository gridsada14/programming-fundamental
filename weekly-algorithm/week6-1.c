#include <stdio.h>

int main(){
    float a, b;
    for (int i = 0; i < 10; i++){
        scanf("%f", &a);
        b += a;
    }
    printf("%.2f", b/10);
    return 0; 
}