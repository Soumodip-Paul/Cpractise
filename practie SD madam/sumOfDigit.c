#include<stdio.h>

void main(){
int i= 2;
switch(i){
case 1: printf("case 1");
case 2: printf("case 2");
case 3: printf("case 3");
case 2+2: printf("case 4");
default: printf("default");
}
}