#include<stdio.h>

int strLength(char * string){
    int length =  0;
    while (string[length]!='\0')
    {
        length++;
    }
    return length;
}

int checkPallindrome(char * string){
    int length = strLength(string);
    char reverse[length];

    for (int i = 0; i < length; i++)
    {
        reverse[i] = string[length-i-1];
    }
    for (int i = 0; i < length; i++)
    {
        if (string[i] == reverse[i]) continue;
        else return 0;

    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char string[300] ;
    printf("Input a string to check it\nnot more than 100 characters\n-> ");
    gets(string);
    if(checkPallindrome(string)) printf("%s is pallindrome",string);
    else printf("%s is not a pallindrome",string);
    return 0;
}
