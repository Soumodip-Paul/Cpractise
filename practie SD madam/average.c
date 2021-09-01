#include<stdio.h>

void main(){
    int a,b,c;
    printf("Input 3 integer numbers");
    scanf("%d%d%d",&a,&b,&c);

    int average = (a +b + c)/3;
    printf("The average number is %d \n",average);
    if (a < average)    printf("%d is less than the average value\n",a);
    else if(a > average)    printf("%d is greater than the average value\n",a);
    else printf("%d is equal to the average value\n",a);

    if (b < average)    printf("%d is less than the average value\n",b);
    else if(b > average)    printf("%d is greater than the average value\n",b);
    else printf("%d is equal to the average value\n",b);

    if (c < average)    printf("%d is less than the average value\n",c);
    else if(c > average)   printf("%d is greater than the average value\n",c);
    else printf("%d is equal to the average value\n",c);
}