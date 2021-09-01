#include <stdio.h>
#include <math.h>

//functions
void km2meter (float km);
void km2feet (float km);
void km2cm (float km);
void km2inch (float km);

void main(){

    float length;
    printf("Input the length in km\t");
    scanf("%f",&length);
    km2meter(length);
    km2cm(length);
    km2feet(length);
    km2inch(length);

}

void km2meter(float km){

    printf( "Length in meter is %f\n",km * 1000);

}

void km2feet (float km) {

    printf( "Length in feet is %f\n", km * 3280.84 );

}

void km2cm (float km ){

    printf( "Length in cm is %f\n", km * 100000);
}

void km2inch (float km ){

    printf( "Length in inch is %f\n", km * 3280.84 * 12 );
}