#include<stdio.h>

void main(){
    int row = 3,col =3,inst;

    int m1[row][col],m2[row][col];
    printf("Input First Matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&m1[i][j]);
        }
        
    }
    printf("Input Second Matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&m2[i][j]);
        }
        
    }
    printf("Input \n1: Matrix Sum\n2: Matrix Difference\n3:Matrix multiply\n->\t");
    scanf("%d",&inst);

    switch (inst)
    {
    case 1:
        printf("Sum of 2 matrixes is : \n\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ",m1[i][j] + m2[i][j]);
            }
            printf("\n");
        }
        
        break;
    
    case 2:
        printf("Difference of 2 matrixes is : \n\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%d ",m1[i][j] - m2[i][j]);
            }
            printf("\n");
        }
        
        break;

    case 3:
        printf("Multiplication of 2 matrixes is : \n\n");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int sum = 0;
                for (int k = 0; k < row; k++) {
                sum = sum + m1[i][k] * m2[k][j];
                }
                printf("%d ", sum);
            }
            printf("\n");
        }
        
        break;

    default:

        printf("Input a valid operation");
        break;
    }
}