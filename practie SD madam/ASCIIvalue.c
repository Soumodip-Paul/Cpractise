#include<stdio.h>

/**
    A – Z	65 – 90
    a – z	97 – 122
    0 – 9	48 – 57
    special symbols	0 – 47, 58-64, 91 – 96, 123 – 127
*/

void main(){
    char a;
    printf("Input a character ");
    scanf("%c",&a);
    //casting to int
    int c =(int) a;
    if (c >= 65 && c <= 90)
    {
        printf("%c is a capital letter",a);
    }
    else if (c >= 97 && c <= 122)
    {
        printf("%c is a small letter",a);
    }
    else if (c >= 48 && c <= 57)
    {
        printf("%c is a number",a);
    }
    else if ((c >= 0 && c <= 47 )||( c >= 58 && c <= 64)||( c >= 91 && c <= 96)||( c >= 123 && c <= 127))
    {
        printf("%c is a special character",a);
    }
    
    
}