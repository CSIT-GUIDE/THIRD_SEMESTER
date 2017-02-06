#include <stdio.h>
#include <math.h>
#define MAX 20

int main()
{
	int i,n;
	float x[MAX],a=0,b=0;
	double y[MAX],r=0;
	float sx=0,slgy=0,sxy=0,sx2=0;
	
	printf("How many points?\n");
	scanf("%d",&n);
	printf("Enter the values for x and y\n");
	for(i=0;i<n;i++)
	{
		scanf("%f %lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sx += x[i];
		slgy += log(y[i]);
		sxy += x[i] * log(y[i]);
		sx2 += x[i] * x[i];
	}
	b = ((n*sxy)-(sx*slgy))/((n*sx2)-(sx*sx));
	
	r = (slgy/n)-(b*sx/n);
	
	a = exp(r);
	
	printf("The regression equation is %fe^(%f x)",a,b);
return 0;
}
