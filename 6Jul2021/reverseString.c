#include<stdio.h>

void printReverse(char * string){
    int length =  0;
    while (string[length]!='\0')
    {
        length++;
    }
    for (int i = length-1; i >= 0; i--)
    {
        printf("%c",string[i]);
    }
    
}

int main()
{   char string[50];
    printf("Enter the string to reverse it : ");
    gets(string );
    printf("Reversed string is : ");
    printReverse(string);
    return 0;
}
