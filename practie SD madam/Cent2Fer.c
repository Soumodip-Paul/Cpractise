#include <stdio.h>

int Cent2Fer (int centValue);

int main()
{   int a;

    printf("Temperature in Centrigred ");
    scanf("%d",&a);

    int b = Cent2Fer (a);

    printf("Temperature in Ferenheight %d", b);
    return 0;
}

int Cent2Fer (int centValue){
    int fer = 0;

    fer = ( centValue * 9 / 5 ) + 32;

    return (fer);
}