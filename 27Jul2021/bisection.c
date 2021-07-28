#include<stdio.h>
#include<math.h>
#include<limits.h>

/**
 * Function to be solved
 * @param x variable
 * 
*/
double f(double x){
    return x * x - 4;
}

void solveBisection(double f(double x),double a, double b,int maxIteration){
    double c = INT_MIN;
    int iteration = 1;
    if (f(a) * f(b) < 0)
    {
            printf("____________________________________________________________________________________\n\n");
            printf("Ite\ta\t\tb\t\tc\t\tf(c)\n");            
            printf("____________________________________________________________________________________\n\n");
        while(iteration <= maxIteration){
            c = (a+b)/2;
            printf("%d\t%lf\t%lf\t%lf\t%lf\n",iteration,a,b,c,f(c));            
                        
            if(f(a) * f(c) > 0) a = c;
            else if (f(a) * f(c) < 0) b = c;
            else break;
            iteration++;          
        }
        
    printf("____________________________________________________________________________________\n\n");
    }
    else if (f(a) * f(b) == 0)  c =  f(a) == 0 ? a: b;
    else{
        printf("Enter a valid range\nThere is n root/even number of roots in this range");
        return;
    }
    printf("%lf",c); 
}

void main(){
    double a,b; int n;
    printf("Guess a : ");
        scanf("%lf",&a);
    printf("Guess b : ");
        scanf("%lf",&b);
    printf("Set maximum number of iteration : ");
        scanf("%d",&n);

   solveBisection(f,a,b,n);
}