/*Solution of ordinary differential equation using Euler’s Method*/

#include <stdio.h>
#define f(x,y) 2*x/y
int main()
{
	float x,xp,x0,y0,y,h;
	printf("Enter the values of x & y\n");
	scanf("%f%f",&x0,&y0);
	printf("Enter the value pf x at which function to be evaluated\n");
	scanf("%f",&xp);
	printf("Enter step size (h) \n");
	scanf("%f",&h);
	y=y0;
	x=x0;
	for(x=x0;x<xp;x=x+h)
	{
		y = y + f(x,y)*h;
	}
	printf("The function value at x = %.2f is %f\n",xp,y);
	return 0;
}
