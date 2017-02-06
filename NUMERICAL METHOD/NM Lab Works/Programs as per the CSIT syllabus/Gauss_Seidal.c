/*Solution of system of linear equations using Gauss Seidel method*/

#include <stdio.h>
#include <math.h>
#define ROW 10
#define COL 10

int main()
{	
	int i,j,dim;
	float A,sum;
	float a[ROW][COL],b[ROW],E[ROW],old_x[ROW],new_x[ROW];
	
	printf("Enter the  dimension of the system\n");
	scanf("%d",&dim);
	
	printf("Enter the accuracy limit\n");
	scanf("%f",&A);
		
	for(i=0;i<dim;i++)
	{
		new_x[i] = 0;
		E[i] = 1;
	}
	
	printf("Enter elements of first matrix\n");
	for(i=0;i<dim;i++)
	{
		for(j=0;j<dim;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter elements of second matrix\n");
	for(i=0;i<dim;i++)
	{	
		scanf("%f",&b[i]);
	}
	
	
	while(E[0]>A && E[1]>A && E[2]>A)
	{
		for(i=0;i<dim;i++)
		{
			sum = b[i];
			for(j=0;j<dim;j++)
			{
				if(i != j)
				{
					sum = sum - a[i][j]*new_x[j];
				}
			}
			old_x[i] = new_x[i];
			new_x[i] = sum/a[i][i];
			E[i] = fabs((new_x[i]-old_x[i])/new_x[i]);
		}
	}
	
	printf("The result is \n");
	
	for(i=0;i<dim;i++)
	{
		printf("%.f\n",new_x[i]);
	}
return 0;
}

