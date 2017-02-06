/*CHECK WETHER THE ENTERED VALUE IS PRIMITIVE OR NOT*/
/* NAME : SAGAR GIRI, SECTION: A, ROLL: 205 */

#include <stdio.h>
#include <math.h>
#define MAX 100
int check(int [],int );
int main()
{
	int p,n,i,c,a,y,num[MAX],x,size=0;

	printf("enter value of p (any Prime no.):\n");
	scanf("%d",&p);

	printf("enter value of n (any number):\n");
	scanf("%d",&n);

	for (a=1;a<p;a++)
	{
		x = pow(n,a);
		y = x % p;
		num[a-1] = y;
		
	}

	for (i=0;i<p-1;i++)
	{
        printf("%d ",num[i]);
        size++;
	}
	printf("\n");
	c = check(num,size);

	printf("\n\n***%d***\n\n\n",c);
	if (c==0)
        printf("\n %d is not a root",n);
	else
        printf("\n %d is a root",n);
return 0;
}

int check(int a[],int size)
{
    int i,j,flag;
    for(i=0;i<size-2;i++)
    {
        for(j=i+1;j<size-1;j++)
        {
            if(a[i] == a[j])
            {
                flag = 0;
                return(flag);
                break;
            }
            else
            {
                flag = 1;
            }
        }
    }
return flag;
}
