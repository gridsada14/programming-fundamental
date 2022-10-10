#include <stdio.h>

int main(){
    int sum = 0;
    int val[2];
    
    FILE* filea = fopen("a.txt", "r");
    FILE* fileb = fopen("b.txt", "w");
    
    for(int i=0; i<2; i++){
        fscanf(filea, "%d", &val[i]);
        sum += val[i];
    }
          
    fprintf(fileb, "%d", sum);
    return 0;
}