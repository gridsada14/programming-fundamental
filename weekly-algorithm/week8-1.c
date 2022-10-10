#include <stdio.h>

int main(){
    int n = 0; 
    int sum = 0;
    int val[20];
    
    FILE* filea = fopen("a.txt", "r");
    FILE* fileb = fopen("b.txt", "w");
    
    while ( fscanf(filea, "%d", & val[n] ) == 1 )  
    { 
       sum += val[n];
       n++;
    } 
          
    fprintf(fileb, "%d", sum);
    fclose(filea);
    fclose(fileb);
    return 0;
}