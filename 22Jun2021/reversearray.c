#include<stdio.h>

void printReverse(int arr[],int count){
    
    for (int i = 0; i < count; i++)
    {
        printf("%d " , arr[count - i -1]);
    }
    
}

void main(){
    printf("Enter the length of array ");
    int count = 0;
    scanf("%d",&count);
    printf("Enter values :");
    int array[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("your array is : ");
    for (int i = 0; i < count; i++)
    {
        printf("%d " , array[i]);
    }
    printf("\nOutput is :");
    printReverse(array,count);
}