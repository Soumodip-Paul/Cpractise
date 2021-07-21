#include<stdio.h>

int strlength(char * string){
    int length = 0 ;
    while (string[length]!='\0')
    {
        length++;
    }
    return length + 1;

}

int countWords(char * string){
    int words = 0;
    int count = 0;
for (int i = 0; i < strlength(string); i++)
{   
    switch (string[i])
    {
    case ' ':
    case '.':
    case '!':
    case ',':
    case ';':
    case ':':
    case '\0':
        if(count!=0) words++;
        count = 0;
        break;
    default:
        count++;
        break;
    }
        
}

return words;
}

int main(int argc, char const *argv[])
{
    char string[300] ;
    printf("Input a string to count the no of words\nnot more than 100 characters\n-> ");
    gets(string);
    printf("No of words in string \n'%s'\n is  %d",string, countWords(string));
    return 0;
}
