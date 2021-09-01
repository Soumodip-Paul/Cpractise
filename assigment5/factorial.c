#include<stdio.h>

int factorial(int n);

void main(){
    printf("Input a number to find its factorial : ");
    int a;
    scanf("%d",&a);
    printf("factorial of %d is %d",a,factorial(a));
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