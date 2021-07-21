#include<stdio.h>

void main(){
    int mark1,mark2,mark3,mark4,mark5,sum;
    float percentage;
    
    printf ("enter the marks of 5 subjects separated by space\n");

    scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);

    int marks[5] = {mark1, mark2, mark3, mark4, mark5};

    for (int i = 0; i < 5; i++)
    {
        if(marks[i]>100||marks[i]<0) {printf("invalid input at mark%d",i+1);
        return;}
    }

    sum = mark1 + mark2 + mark3 + mark4 + mark5 ;

    percentage =(float) sum  / 5;

    printf("Total number of the student is %d\nPercentage of the student is %f %%",sum,percentage);    

}