#include<stdio.h>

void printUptoN(int n){
int a =0,b=1;
if (n > 0) printf("%d ",a);
if (n > 1) printf("%d ",b);
for (int i = 3; i <= n; i++)
{
    int temp = b;
    b = a + b;
    a = temp;
    printf("%d ",b);
}


}

void main(){
    int n =0;
    printf("Enter the position of Fibonacci series ");
    scanf("%d",&n);
    printUptoN(n);
}