#include<stdio.h>
void findMinUsingIfElse(float a,float b,float c);

void main(){

    printf("input 3 numbers to find the minimum of them\n");
    float a,b,c;

    scanf("%f%f%f",&a,&b,&c);
    float max = a < b ? a < c ? a : c : b < c ? b : c;
    printf("minimum of %f ,%f ,%f  is %f\n",a,b,c,max);

    //Using if else

    findMinUsingIfElse(a,b,c);

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
