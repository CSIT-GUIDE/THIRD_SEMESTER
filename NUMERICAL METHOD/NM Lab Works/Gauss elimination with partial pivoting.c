#include <stdio.h>
#include <math.h>

int main()
{
	int i,j,var,k,p,row;
	float pivot,term,sum=0.0,temp,largest,x;
	
	printf("Enter no. of vars\n");
	scanf("%d",&var);
	
	float a[var][var], RHS[var], ANS[var];
	
	printf("start entering the coffecients\n");	
	for(i = 0;i<var;i++)
	{
		for(j=0;j<var;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	
	
	printf("now enter the RHS matrix\n\n");
	for(i=0;i<var;i++)
	{
		scanf("%f",&RHS[i]);
	}
	
	/* **** forward elimination **** */
	
	for(k=0;k<var-1;k++)
	{
		largest=fabs(a[k][k]);
		for(p=k+1;p<=var-1;p++)
		{
			x = (fabs(a[p][k]));
			if(x > largest)
			{
				largest=fabs(a[p][k]);
				row = p;
			}
		}
		
		for(p=0;p<var;p++)
		{
			temp = a[k][p];
			a[k][p] = a[row][p];
			a[row][p] = temp;
		}
		temp = RHS[k];
		RHS[k]=RHS[row];
		RHS[row] = temp;
		
		pivot = a[k][k];
		for(i=k+1;i<var;i++)
		{
			term = a[i][k]/pivot;
			for(j=0;j<var;j++)
			{
				a[i][j]=a[i][j]-a[k][j]*term;
			}
			RHS[i]=RHS[i]-RHS[k]*term;
		}
	}//end for loop for k
	
	
	/* **** Backward Substution **** */
	
	ANS[var-1]=RHS[var-1]/a[var-1][var-1];
	for (i=var-2;i>=0;i--)
	{
		for(j=var-1;j>0;j--)
		{
			sum = sum + (a[i][j] * ANS[j]);
		}
		ANS[i]=(RHS[i]-sum)/a[i][i];
	}
	
	
	printf("the answer is\n");
	for(i=0;i<var;i++)
	{
		printf("%.f\n",ANS[i]);
	}
	
return 0;
}
