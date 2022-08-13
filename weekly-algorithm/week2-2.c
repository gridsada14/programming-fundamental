#include <stdio.h>

int main(){
    double a, b, c, x;
    scanf_s("%lf %lf %lf", &a, &b, &c);
    switch (a<b){
    case 1:
        switch (c<a){
        case 1:
            x=c;
            break;
        case 0:
            x=a;
            break;
        }
        break;
    case 0:
        switch (b<c){
        case 1:
            x=b;
            break;
        case 0:
            x=c;
            break;
        }
        break;
    }
    printf("%lf", x);
    return 0;
}   