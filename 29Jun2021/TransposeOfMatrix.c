#include<stdio.h>

void main(){
int i,j;
printf("Input the number of rows : ");
scanf("%d" , &i);
printf("Input the number of columns : ");
scanf("%d" , &j);

int source[i][j],destination[j][i];

printf("Input the matrix\n");

for (int row = 0; row < i; row++)
{
    for (int col = 0; col < j; col++)
    {
        scanf("%d",&source[row][col]);
    }
    
}



for (int row = 0; row < i; row++)
{
    for (int col = 0; col < j; col++)
    {
        destination[col][row] = source[row][col];

    }
    
}
printf("Transpose of the matrix is \n");

for (int row = 0; row < j; row++)
{
    for (int col = 0; col < i; col++)
    {
        printf("%d ",destination[row][col]);
    }
    printf("\n");
}

}