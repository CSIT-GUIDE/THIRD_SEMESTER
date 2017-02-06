/*Integration using Trapezoidal rule*/
#include <stdio.h>
#include <math.h>
#define f(x) (x+2)
int main()
{
	float h,x0,x1,fx0,fx1,v;
	printf("Enter the lower and upper limit \n");
	scanf("%f%f",&x0,&x1);
	h=x0-x1;
	fx0=f(x0);
	fx1=f(x1);
	v = h/2*(fx0 + fx1);
	printf("Value of integration is = %f\n",v);
	return 0;
}
