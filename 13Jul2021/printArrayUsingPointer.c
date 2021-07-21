#include<stdio.h>

void printArray(int * array,int count){
    printf("All the array elements are \n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ",*(array + i));
    }
    
}

int sumOfArray(int * array , int count){

    if (count == 0 ) return 0;
    return *(array + count - 1) + sumOfArray(array,count-1);
}

void inputArray(int * array,int count){
    for (int i = 0; i < count; i++)
    {
        scanf("%d",array + i);
    }
    
}

int main(int argc, char const *argv[])
{
    int count;
    printf("Enter the length of arrray : ");
    scanf("%d",&count);
    int arr[count];
    printf("Enter your array : \n");
    inputArray(arr,count);
    printArray(arr,count);
    printf("\nSum of the array is : %d", sumOfArray(arr,count ));
    return 0;
}
