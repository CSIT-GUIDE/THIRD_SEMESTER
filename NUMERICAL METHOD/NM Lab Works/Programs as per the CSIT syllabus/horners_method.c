/*Solution of polynomial using Hornor’s rule to evaluate polynomial*/

#include <stdio.h>
#define MAX 10
int main()
{
	int degree,i,x,a[MAX],b[MAX];
	printf("Enter the highest degree of polynomial:\n");
	scanf("%d",&degree);
	
		
	printf("Enter the values of coeffecients:\n");
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
		
	printf("\nThe value of the polynomial is %d",b[0]);
return 0;
}
