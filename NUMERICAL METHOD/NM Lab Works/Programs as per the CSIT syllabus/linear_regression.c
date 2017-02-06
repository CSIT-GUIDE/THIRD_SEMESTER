/*Fitting a linear function using least square method 
 * - Linear (straight line) i.e. y= ax +b*/

#include <stdio.h>
#define MAX 20
int main()
{
	int i,n;
	float x[MAX],y[MAX],a=0,b=0;
	float sx=0,sy=0,sxy=0,sx2=0;
	
	printf("How many points?\n");
	scanf("%d",&n);
	printf("Enter the data points x and y:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&x[i],&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sx += x[i];
		sy += y[i];
		sxy += x[i] * y[i];
		sx2 += x[i] * x[i];
	}
	
	a = ((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
	
	b = (sy/n)-(a*sx/n);
	
	printf("\n\nThe regression equation is y=%.2fx+%.2f",a,b);
return 0;
}
