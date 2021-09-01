#include<stdio.h>

double func(double x)
{
	return x*x*x - x*x + 2;
}

// Prints root of func(x) in interval [a, b]
void regulaFalsi(double a, double b, int MAX_ITER)
{
	if (func(a) * func(b) >= 0)
	{
		printf("You have not assumed right a and b\n");
		return;
	}

	double c = a; // Initialize result

	for (int i=0; i < MAX_ITER; i++)
	{
		// Find the point that touches x axis
		c = (a*func(b) - b*func(a))/ (func(b) - func(a));

		// Check if the above found point is root
		if (func(c)==0)
			break;

		// Decide the side to repeat the steps
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	printf("the value of root is : %lf",c);
}

// Driver program to test above function
int main()
{
	double a,b; int n;
	printf("Guess a: ");
	scanf("%lf",&a);
	printf("Guess b: ");
	scanf("%lf",&b);
	printf("Maximum number of iteration is : ");
	scanf("%d",&n);

	regulaFalsi(a, b, n);
	return 0;
}
