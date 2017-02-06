/* FIND THE SECOND LARGEST ELEMENT FROM THE ARRAY OF INTEGERS*/
/* NAME : SAGAR GIRI, SECTION: A, ROLL: 205 */

#include <stdio.h>
int find(int [], int);
int second_largest=0; //set second largest as the global variable
int main()
{
	int i,j,temp,size;
	int a[size];
	int result = 0;
	
	printf("How many numbers\n");
	scanf("%d",&size);
	
	printf("Enter the %d numbers numbers:\n",size);
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]); // takes numbers as input
	}

	for(i=0;i<size;i++) //sort the numbers
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("the sorted array is\n");

	for (i=0;i<size;i++)
	{
		printf("%d\t",a[i]); //prints sorted array
	}
	
	printf("\n");
	
	
	result = find(a,size);
	
	if (result == 0)
	{
		printf("Array has no second largest element\n");
	}
	else
	{
		printf("\nAnd the second largest number in the array is= %d",second_largest);
	}
return 0;
}

int find(int b[],int z)
{
	int i,temp,flag=0;
	
	temp = b[z-1];

	for(i=z-1;i>=0;i--)
		{
				if(temp > b[i])
				{
					second_largest = b[i];
					flag = 1;
					break;
				}
		}
	return(flag);
}
