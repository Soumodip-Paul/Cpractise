#include<stdio.h>
#include<math.h>

void main(){
    float t;
    printf("enter an angle in degree ");
    scanf("%f",&t);
    t = t * M_PI / 180;
    float result =  powf(sinf(t),2) + powf(cosf(t),2);
    printf("%.0f",result);
    
}