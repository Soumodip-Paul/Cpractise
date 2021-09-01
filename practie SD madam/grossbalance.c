#include <stdio.h>

int getSalary (int BasePay);

void main(){

    int basePay ;

    printf("Input Your Base Salary : ");

    scanf("%d" , &basePay);

    printf("Your total salary is :\t%d",getSalary(basePay));

}

int getSalary (int BasePay){
    int DA = BasePay * 40 / 100 ;

    int HRA = BasePay * 20 / 100 ;

    int GrossPayment = BasePay + DA + HRA ;

    return GrossPayment;
}
