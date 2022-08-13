#include <stdio.h>

int main(){
    double a, b, c, x;
    scanf_s("%lf %lf %lf", &a, &b, &c);
    if(a<b){
        if(c<a){
            x=c;
        }else{
            x=a;
        }
    }else{
        if(b<c){
            x=b;
        }else{
            x=c;
        }
    }
    printf("%lf", x);
    return 0;
}