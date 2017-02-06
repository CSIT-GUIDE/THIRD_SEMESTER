#include <stdio.h>
#include <math.h>
float g(float );
int main()
{
	float x0,E,x1,error;
	printf("enter the value of x0:\n");
	scanf("%f",&x0);
	printf("enter the value of accuracy limit E:\n");
	scanf("%f",&E);
	do {
		error = fabs((g(x0)-x0)/g(x0));
		if (error > E)
		{
			x0 = g(x0);
			x1 = g(x0);
		}
	}while(error >=E);
	printf("\n\nThe root is %.2f",x1);
	return 0;
}
float g(float x)
{
	float v = x*x -5*x+8;
	return (v);
}
