#include <stdio.h>
int main()
{
	int n,i,j;
	float x,ax[10],fx[10],temp,k=0,lx[10];
	
	printf("how many points ?\n");
	scanf("%d",&n);
	
	printf("Enter the value of x\n");
	scanf("%f",&x);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the value of x and fx at i = %d\n",i+1);
		scanf("%f%f",&ax[i],&fx[i]);
	}
	
	for(i=0;i<n;i++)
	{
		temp = 1.0;
		for(j=0;j<n;j++)
		{
			if(i != j)
			temp = temp * ((x-ax[j])/(ax[i] - ax[j]));			
		}
		lx[i] = temp;
	}
	
	for(i=0;i<n;i++)
	{
		k = k + (fx[i] * lx[i]);
	}
	
	printf("\nthe value of interpolation = %.2f\n",k);
return 0;
}
