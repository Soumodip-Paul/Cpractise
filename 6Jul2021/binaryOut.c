#include<stdio.h>

int getbinary(int n){
    if(n == 0)return 0;
    int binary = getbinary(n/2)*10+n%2;
    return binary;
}

int main(){
    int n = 0;
    printf("input a number to get its binary value : ");
    scanf("%d",&n);
    printf("binary value of %d is %d ",n,getbinary(n));
}