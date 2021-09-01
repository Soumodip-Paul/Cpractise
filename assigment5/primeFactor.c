# include <stdio.h>
# include <math.h>

void primeFactors(int n);

/* Driver program to test above function */
int main()
{
	int n = 0;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Prime Factors of %d are ",n);
	primeFactors(n);
	return 0;
}
void primeFactors(int n)
{
	
	while (n%2 == 0)
	{
		printf("%d ", 2);
		n = n/2;
	}

	for (int i = 3; i <= sqrt(n); i = i+2)
	{
		
		while (n % i == 0)
		{
			printf("%d ", i);
			n = n/i;
		}
	}

	if (n > 2)
		printf ("%d ", n);
}
