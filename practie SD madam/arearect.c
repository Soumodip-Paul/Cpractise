#include <stdio.h>
#include <math.h>

int main() {
	int testCase;
	scanf("%f",&testCase);
	while(testCase-->0)
	{
        float a,b,c,k,area;
	    scanf("%f%f%f%f",&a,&b,&c,&k);
	    float s = (a+b+c)/2;
	    area = sqrt(s*(s-a)*(s-b)*(s-c));
	    printf("%f\n",(k*area)/(k+1));
	}
	
	
	return 0;
}

