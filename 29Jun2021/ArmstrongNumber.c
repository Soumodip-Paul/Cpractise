#include<stdio.h>
#include<math.h>

void printArmstrong(int n){
    int temp= n,sum = 0;
    while (temp > 0)
    {   int r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("%d ",n);
    }
        

}

void main(){

    printf("Armstrong Numbers Between 1 and 500 are \n");
    for (int i = 1; i <= 500; i++)
    {
        printArmstrong(i);
    }
    

}