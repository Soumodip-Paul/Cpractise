#include<stdio.h>

int factorial(int n);


void main(){
    int sum =0 ;
    printf("Input a number to find its factorial series : ");
    int a;
    scanf("%d",&a);
    while (a)
    {   if (a!=1) printf("%d! + ",a);
        else printf("%d!",a); 
        sum += factorial(a);
        a--;
    }
    printf(" = %d",sum);
    
}
int factorial(int n){
     int factor = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0) factor = 1;
        else factor *= i;
    }
    return factor;
}

