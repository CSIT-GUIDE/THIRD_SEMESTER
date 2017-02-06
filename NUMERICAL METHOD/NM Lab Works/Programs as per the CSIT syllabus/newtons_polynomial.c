/*Solution of polynomial using Newton's method*/

#include <stdio.h>
#include <math.h>
#define F(x) (a[4]*x*x*x*x+a[3]*x*x*x+a[2]*x*x+a[1]*x+a[0])	//f(x)
#define FD(x) (4*a[4]*x*x*x+3*a[3]*x*x+2*a[2]*x+a[1])		//f'(x)
float a[100],q[100];
int main()
{
	float x0,xr,fx0,fdx0,E,Er,c;
	int i,n,m;
	printf("Enter degree of polynomial:\n");
	scanf("%d",&n);
	printf("Enter coeffecient of dividend polynomial:\n");
	for(i=n;i>=0;i--)
	{
		scanf("%f",&a[i]);
	}
	printf("Enter the initial guess and the tolorence limit:\n");
	scanf("%f %f",&x0,&E);
	while(n>1)
	{
		while(1)
		{
			fx0=F(x0);fdx0=FD(x0);
			xr=x0-fx0/fdx0;
			Er=fabs((xr-x0)/xr);
			if(Er<E)
			{
				printf("Root%d = %f\n",n,xr);
				break;
			}
			x0=xr;
		}
		c=xr;
		q[n]=0;
		m=n-1;
		while(m>=0)
		{
			q[m]=a[m+1]+q[m+1]*c;
			m--;
		}
		for (i = n; i >=0; i--)
		{
			a[i] = q[i];
		}
		n = n-1;
		x0=xr;
	}
	xr=(-a[0]/a[1]);
	printf("Root%d = %f\n", n,xr);
	return 0;
}
