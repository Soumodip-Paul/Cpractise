#include<stdio.h>

/**
 * print structure like
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
*/
void triangle1(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= i ; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}
/**
 * print structure like 
*      1
*     1 2 1
*   1 2 3 2 1
* 1 2 3 4 3 2 1
*/

void triangle2(int n){
    for (int i = 1; i <= n; i++)
    {   
        for (int j = n - i ; j > 0 ; j--) {
            printf("  ");
        }

        for (int j = 1 ; j <= i ; j++) {
            printf("%d ",j);
        }
        for (int j = i -1; j > 0 ;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
/**
 * print like 
 * 4 3 2 1 0
 * 3 2 1
 * 2
*/
void triangle3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1  ; j >= i - 1 ; j--) {
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main(){
    triangle1(4);
    printf("\n");
    triangle2(4);
    printf("\n");
    triangle3(4);
    return 0;
}
