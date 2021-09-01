#include<stdio.h>

int main(){
int population = 80000;
int menPercent = 52;
int literateMenPercent = 35;
int totalLiteratePercent = 48;

int totalMen = population * menPercent / 100;
int totalWomen = population * ( 100 - menPercent) / 100;
int totalLiterate = population * totalLiteratePercent /100;
int totalLiterateMen = population * literateMenPercent /100;
int totalLiterateWomen = totalLiterate - totalLiterateMen;
int totalIlliterateMen = totalMen - totalLiterateMen;
int totalIlliterateWomen = totalWomen - totalLiterateWomen;

printf("Illiterate population of men is : %d\n",totalIlliterateMen);
printf("Illiterate population of women is : %d\n",totalIlliterateWomen);

return 0;
}
