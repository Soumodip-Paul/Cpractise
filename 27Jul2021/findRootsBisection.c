#include<stdio.h>
#include<limits.h>
#include<math.h>

//The ratio we want in Newton-Raphson Method
#define EPSILON 0.00001

//Declearing the constnt c
double c;

/**
* we have to solve xtan(x) = c
* so we have to take
* function xtan(x) - c
*/ 
double f(double x){
    return x * tan(x) - c ;
}

//Derivative of f
double df(double x){
    return tan(x) + x / (cos(x) * cos(x));
}

/**
 * Here is our Bisection Method
 * first we declare c with INT_MIN to avoid conflict
 * Also we are declaring the total no of iteration 
 * we want.
*/
int solveBisection(double a, double b,int maxIteration){
    double c = INT_MIN;
    int iteration = 1;

    /**If f(a) * f(b) is negative then the root 
    * may lie between a & b as one solution may 
    * lead f(x) to infinity
    */
    if (f(a) * f(b) < 0)
    {   /**
        * Total no of iteration is
        * maxIteration
        */ 
        while(iteration <= maxIteration){
        // Here we Bisect a and b
        c = (a+b)/2;   
        // updating a as the root may lie between b and c
            if(f(a) * f(c) > 0) a = c; 
        // updating a as the root may lie between a and c
            else if (f(a) * f(c) < 0) b = c;
        // break if f(c) = 0
            else break;

            iteration++;          
        }
    }
    // Check if our limits contains root
    else if (f(a) * f(b) == 0)  c =  f(a) == 0 ? a: b;
    //Force User to enter new range
    else {
        printf("Enter a valid range\nThere is n root/even number of roots in this range\n");
        return -1;
    }
    // printing the root
    if(((int) f(c)) == 0) printf("One Root of the equation is %lf\n",c);
    //Discard if f(c) is infinity
    else {
        printf("Enter a valid range of the variable\n");
        return -1 ;
    }
    return 0;
}

/**
 * Here is our Newton-Raphson Method
 * as we can see that f(0) = 0
 * so we can apply Newton-Raphson Method
*/
void newtonRaphson(double x)
{
    double h = f(x) / df(x);
    //Iterating upto the ratio 
    //equal to EPSILON 
    while (fabs(h) >= EPSILON)
    {
        h = f(x)/df(x);
  
        x = x - h;
    }
 
    printf( "The value of the root is : %lf\n",  x);

}
 
int main(int argc, char const *argv[])
{   //Here we Take the input of c
    printf("Enter the constant value c : ");
    scanf("%lf",&c);

    //Declaring the number of iteration we want
    //Here is 3
    int root=3; double a,b;

    printf("To solve the problem Press\n1\to use\tBisection Method");
    printf("\n2\to use\tNewton-Raphson Method\nEnter your choice : ");
    int method ;
    scanf("%d",&method);
    while (root-->0)
    {   
        //flag to check if range of bisection 
        //method is valid or not
        int flag = 0;
        //Here is our menu driven program
        switch (method)
        {
        // Using Bisection Method 
        // Only problem of this method 
        // is it cannot detect the 
        // root at 0 for c=0
        // i.e. xtan(x) =0 as 
        // f is symmetric along y-axis  
        case 1:
            do{
            printf("Guess the lower limit a: ");
            scanf("%lf",&a);
            printf("Guess the upper limit b: ");
            scanf("%lf",&b);

            flag = solveBisection(a,b,100);
            }while (flag == -1) ;          
            break;
        // Using Newton-Raphson method
        case 2:
            printf("Guess any number: ");
            scanf("%lf",&a);
            newtonRaphson(a);
            break;
        default:
            printf("Enter a valid menu");
            break;
        }
    }
}