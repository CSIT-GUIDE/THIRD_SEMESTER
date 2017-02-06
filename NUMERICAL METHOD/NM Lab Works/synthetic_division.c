#include <stdio.h>
#include <math.h>
#define MAX 10
int main(void)
{
	int a[MAX],b[MAX];
	int degree,i,x;
	int remainder;
	
	printf("enter the highest degree of the polynomial\n");
	scanf("%d",&degree);
		
	printf("now, enter the value of %d coeffecients\n",degree+1);
	for (i=degree; i>=0;i--)
	{
		scanf("%d",&a[i]);
	}
	
	printf("now, enter the value of a\n");
	scanf("%d",&x);
	
		for(i=degree;i>=0;i--)
		{
			if(i==degree)
			{
				b[degree] = 0;
				i--;
			}
			b[i] = a[i+1]+x*b[i+1];
		}
		
		
		printf("\nthe quotient is\n");
			for(i=degree-1;i>=0;i--)
			{
				printf("%dx^%d + ",b[i],i);
			}
		
		remainder = a[0]+x*b[0];
		printf("\n And the remainder is %d\n\n",remainder);
		
		
return 0;
}
