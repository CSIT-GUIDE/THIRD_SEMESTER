/* CHECK WETHER THE GIVEN ARRAY OF INTEGERS 
 * SYSTEMATICALLY INCREASING OR NOT*/

/* NAME : SAGAR GIRI, SECTION: A, ROLL: 205 */

#include <stdio.h>
#define MAX 100
int isSystematicallyIncreasing(int[], int);
int main(void)
{	
	int a[MAX], size, i,x;
	
	printf("\nEnter how many elements: ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++){
		printf("\nEnter a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	x = isSystematicallyIncreasing(a,size);
	
	printf("\nSystematically increasing? %d",x);
return 0;
}

int isSystematicallyIncreasing(int n[], int size) 
{	
	int i, j, index = 0;	
	for(i=0;i<size;i++)
	{		
		for(j=1;j<=i+1 && index<size;index++,j++) //generates the sequence of the increasing array
		{		
			if(j != n[index]) // checks for equality between sequence generated and given array
			return 0;
		}
	}
	return 1;
}
