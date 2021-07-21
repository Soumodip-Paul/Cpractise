#include<stdio.h>

void main(){
    int n,sum = 0;
    printf("Enter a number to find its sum of digits ");
    scanf("%d",&n);
    n = n > 0? n : -n ; 
    // for negative numbers we are taking absolute value
    for (int test = n;test > 0;test /= 10){
        int remainder = test%10;
        sum += remainder;
    }   
    printf("sum of the digits is %d",sum);
}