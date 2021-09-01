#include<stdio.h>

void main(){
    int n;
    
    printf("Enter a number between 1 and 100 : ");
    scanf("%d",&n);
    if(n > 0 && n < 100)    {
    printf("The numbers which are divisible by %d between 1 and 100 are \n",n);
    for (int i = 1; i <= 100; i++) if(i % n == 0) printf("%d ",i);
    }
    else printf("invalid input ");

}