/*/*Solution of system of linear equations using power method*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	float k,a[10][10],x[10],y[10],nx[10],E[10],error;
	
	printf("Enter the dimension:\n");
	scanf("%d",&n);
	
	printf("Enter the accuracy limit:\n");
	scanf("%f",&error);
	
	printf("enter the coeffecient matrix:\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	printf("enter guess vector:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("\n\n");
	while(1)
	{
		for(i=0;i<n;i++)
		{
			y[i] = a[i][0]*x[0] + a[i][1] * x[1] + a[i][2] * x[2];
		}
		
		k = fabs(y[0]);
		for(i=0;i<n;i++)
		{
			if ( k < fabs(y[i]))
			{
				k = y[i];
			}
		}
		
		for(i=0;i<n;i++)
		{
			nx[i] = (1/k)*y[i];
		}
		for(i=0;i<n;i++)
		{
			E[i] = (nx[i] - x[i])/nx[i];
			if(fabs(E[i]) > error)
			{
				break;
			}
		}
		
		if(i==n)
		{
			printf("eigen value is %.4f:\n", k);
			printf("\n\n");
			printf("The eigen vector is:\n");
			for(i=0;i<n;i++)
			{
				printf("%.4f\n",nx[i]);
			}
			break;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				x[i] = nx[i];
			}
		}
	}
return 0;
}
