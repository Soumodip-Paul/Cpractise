#include <stdio.h>

float ferToCent (float ferValue);

float main()
{   float a;

    printf("Temperature in Fahrenheit\t");
    scanf("%f",&a);

    printf("Temperature in Centigrade %.3f", ferToCent (a));
    return 0;
}
/**
 * Converts Ferenheight to Centigred
 * returt the value in float
*/
float ferToCent (float ferValue){
    float cent = 0;

    cent = ( ferValue - 32 ) * 5 /9;

    return (cent);
}

