#include<stdio.h>

int lengthOfStr(char * string){
    int length =  0;
    while (string[length]!='\0')
    {
        length++;
    }
    return length;
}

void revertSpace(char * string){
    
    for (int i = 0; i < lengthOfStr(string); i++)
    {
        if(string[i] == ' '){
            
            string[i] = '|';
        }
    }
    
}

int main(int argc, char const *argv[])
{   char string[300] ;
    printf("Input a string to format it\nnot more than 300 characters\n-> ");
    fgets(string,300,stdin);
    printf("Formatted string is\n");
    revertSpace(string);
    puts(string);
    return 0;
}
