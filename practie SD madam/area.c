#include<stdio.h>
#include<math.h>

void main(){

    float length,breadth ,radius;

    printf("Input the length  of rectangle :\t"); scanf("%f",&length);
    printf("Input the breadth of rectangle :\t"); scanf("%f",&breadth );
    printf("Input the radius of circle :\t"); scanf("%f",&radius);
    printf("Area of rectangle is %f", length * breadth );
    printf("\nArea of circle is %f", M_PI * radius * radius);

}
