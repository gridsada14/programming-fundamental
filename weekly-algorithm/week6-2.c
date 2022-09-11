#include <stdio.h>
#include <string.h>

int main() {
    int lower=0,upper=0;
    char str[50];
    gets(str);

    // Find upper lower with string.h
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z'){
            lower++;
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
            upper++;
        }
    }

    printf("-> %d Upper case\n", upper);
    printf("-> %d Lower case", lower);
    
    return 0;
}
