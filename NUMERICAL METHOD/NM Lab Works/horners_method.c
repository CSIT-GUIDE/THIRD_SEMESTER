#include <stdio.h>
#define MAX 10
int main(void)
{
	int degree,i,x,a[MAX],b[MAX];
	printf("enter the highest degree of polynomial\n");
	scanf("%d",&degree);
	
		
	printf("\nEnter the values of coeffecients\n");
	for(i=0;i<=degree;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Now, enter the value of x:\n");
	scanf("%d",&x);	
	
	for(i=degree;i>=0;i--)
	{
		if(i==degree){
			b[i]=a[i];
			i--;
		}
		b[i]=a[i]+b[i+1]*x;	
	}
	
	for(i=1;i<=degree;i++)
	{
		printf("\n*%d*",b[i]);
	}
	
	printf("\n\nThe value of the polynomial is %d",b[0]);
return 0;
}
