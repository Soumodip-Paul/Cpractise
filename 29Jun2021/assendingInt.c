#include<stdio.h>

void sort(int * arr , int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
        
}

void main(){
    int n;
    printf("Define the number of inputs : ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("Your Inputs Are (In Increasing Order) :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}