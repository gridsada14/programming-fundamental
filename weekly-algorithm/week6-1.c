#include <stdio.h>

int main() {
    int lower=0,upper=0;
    int length=0; 
    char str[50];

    scanf("%s", str);

    // Find '\0' intead using strlen()
    for (int j = 0; str[length] != '\0'; ++j)
        length++;

    // Find upper lower without string.h
    for (int i = 0; i < length; i++)
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

