#include <stdio.h>

int main()
{
    int x = 10;
    int y = 5;
    
    x = ( y * x ) / ( y = x );
    
    printf("x is %d\n", x);
    printf("y is %d", y);
}
