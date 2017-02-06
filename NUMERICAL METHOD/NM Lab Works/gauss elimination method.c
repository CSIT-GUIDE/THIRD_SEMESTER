#include <stdio.h>
int main()
{
	int i,j,var,k;
	float pivot,term,sum=0.0;
	
	printf("Enter no. of vars\n");
	scanf("%d",&var);
	
	float a[var][var];
	float RHS[var];
	float ANS[var];
	
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
		pivot=a[k][k];
		if(pivot==0)
		{
			printf("Method fail...exiting\n");
			break;
		}
		else
		{
			for(i=k+1;i<var;i++)
			{
				term = a[i][k]/pivot;
				for(j=0;j<var;j++)
				{
					a[i][j]=a[i][j]-a[k][j]*term;
				}
				RHS[i]=RHS[i]-(RHS[k]*term);
			}
		}//end else
		//printf("\nIteration %d \n",k+1);
		//for(i=0;i<var;i++)
		
		//{
			//for(j=0;j<var;j++)
			//{
				//printf("%.3f :: %.3f",a[i][j],RHS[j]);
			//}
			//printf("\n");
		//}
	}//end for loop for k
	
	
	/* **** Backward Substution **** */
	
	ANS[var-1]=RHS[var-1]/a[var-1][var-1];
	for (i=var-2;i>=0;i--)
	{
		for(j=var-1;j>0;j--)
		{
			sum = sum + a[i][j] * ANS[j];
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
