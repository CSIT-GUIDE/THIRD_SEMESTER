/* CHECK WETHER A NUMBER IS FACTORIAL PRIME OR NOT*/
/* NAME : SAGAR GIRI, SECTION: A, ROLL: 205 */

#include <stdio.h>
int isFactorialPrime(int );
int isPrime(int );
int factorial(int );

int main()
{
	int n,a,b;
	printf("enter a number (n) :\n");
	scanf("%d",&n);
	
	a = isPrime(n);
	
	if ( a == 1)
	{
		b = isFactorialPrime(n);
		if (b == 0)
		{
			printf("\n n = %d is not a factorial prime",n);
			return 0; 
		}
		else
		{
			printf("n = %d is a factorial prime",n	);
		}
	}
	else
		printf("sorry n = %d is not prime",n);
return 0; 
}

int isPrime(int n)
{
	int i,flag;
	for(i=2;i<=(n/2)+1;i++)
	{
		
		if (n==2)
		{
			//printf("test");
			flag = 1;
		}
		else if (n%i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return flag;
} //end of isPrime

int isFactorialPrime(int n)
{
	int p;
	int q=0,r,flag=0;
	for (r=1;r<n;r++)
	{
		p = factorial(r);
		printf("\t\t%d\n",p);
		q = p+1;
		if (n==q)
		{
			flag = 1;
			break;	
		}
		else
			flag = 0;
	}
return (flag);	 
} //end of isFactorialPrime fxn

int factorial(int n)
{
	int x;
	if (n == 1)
		return 1;
	else
		x = n * factorial(n-1);
		return (x);
}
