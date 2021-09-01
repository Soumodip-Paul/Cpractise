#include<stdio.h>
void findMaxUsingIfElse(float a,float b,float c);
void findMinUsingIfElse(float a,float b,float c);
void main(){
    printf("input 3 numbers to find the max and min of them\n");
    float a,b,c;

    scanf("%f%f%f",&a,&b,&c);

    findMaxUsingIfElse(a,b,c);
    printf("\n");
    findMinUsingIfElse(a,b,c);
}
void findMaxUsingIfElse(float a,float b,float c){
    if (a > b)
    {
        if ( a > c)
        {
            printf("Maximum number is %f",a);
        }
        else
        {
            printf("Maximum number is %f",c);
        }
        
    }
    else
    {
        if (b > c)
        {
            printf("Maximum number is %f",b);
        }
        else
        {
            printf("Maximum number is %f",c);
        }
        
    }
    
}
void findMinUsingIfElse(float a,float b,float c){
    if (a < b)
    {
        if ( a < c)
        {
            printf("Minimum number is %f",a);
        }
        else
        {
            printf("Minimum number is %f",c);
        }
        
    }
    else
    {
        if (b < c)
        {
            printf("Minimum number is %f",b);
        }
        else
        {
            printf("Minimum number is %f",c);
        }
        
    }
}
