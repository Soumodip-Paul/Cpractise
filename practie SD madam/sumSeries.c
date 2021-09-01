#include <stdio.h>
void main(){
    int n,sum = 0;
    printf("Enter a non-zero number to find the sum upto n natural number  ");
    scanf("%d",&n);
    if (n > 0){
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }
        
    printf("sum of the series is %d",sum);
    }
    else printf("invalid input");
}