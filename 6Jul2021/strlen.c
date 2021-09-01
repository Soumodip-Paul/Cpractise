#include<stdio.h>

int strlength(char * string){
    int count = 0;
    while(string[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    char string[100];
    printf("Input a string : ");
    gets(string);
    printf("%d",strlength(string));
    return 0;
}