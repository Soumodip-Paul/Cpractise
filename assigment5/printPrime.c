#include<stdio.h>
#include<math.h>

void main(){
    printf("All prime number between 1 and 100 are\n");
    for (int i = 1; i <= 100; i++)
    {   int count = 0;
        for (int j = 2; j <= sqrtf(i); j++)
        {
            if (i % j == 0 ) {
                count++;
                break;
            };
            
        }
        if (count ==0 && i != 1)
        {
            printf("%d  ",i);
        }
        
    }
    
}