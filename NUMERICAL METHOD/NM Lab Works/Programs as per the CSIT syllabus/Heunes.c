/*Solution of ordinary differential equation using Heun’s Method*/

#include <stdio.h>
#define f(x,y) 2*y/x
int main()
{
	float x,xp,x0,y0,y,h,m1,m2;
	printf("Enter the values of x & y\n");
	scanf("%f%f",&x0,&y0);
	printf("Enter the value pf x at which function to be evaluated\n");
	scanf("%f",&xp);
	printf("Enter step size (h) \n");
	scanf("%f",&h);
	for(x=x0;x<xp;x=x+h)
	{
		m1 = f(x,y);
		m2 = f(x+h,y+h*m1);
		y = y+h/2*(m1+m2);
	}
	printf("The function value at x = %.2f = %f\n",xp,y);
	return 0;
}
