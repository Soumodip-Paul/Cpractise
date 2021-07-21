#include<stdio.h>

int sumOfDigit(int n){
    if (n == 0) return 0;
    return sumOfDigit(n/10)+ n % 10;
    
}

int main(){
    int n = 0;
    printf("Enter  number to find its sum of digits");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sumOfDigit(n));
    return 0;
}