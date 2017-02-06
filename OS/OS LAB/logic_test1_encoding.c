/* BINARY STRING ENCODING*/
/* NAME : SAGAR GIRI, SECTION: A, ROLL: 205 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check(char []);
int main()
{

   char digit[10];
   char test[2];
   int i, j,flag;
   
   printf("Enter number:");
   gets(digit);
   
   int n = strlen(digit);
   printf("len = %d\n", n);
   
   
   
   //checks for negative
   flag = check(digit);
   
   if(flag == 1)
   {
		printf("-");
   }
		
	//prints encoded binary string	
   for(i=0; i<n; i++)
   {
		test[0] = digit[i];
		test[1] = '\0';
		int num = atoi(test);
			for(j=0; j<num; j++)
			{
				printf("0 ");
			}
			printf("1 ");
   }
   
return 0;
}

int check(char digit[])
{
	int flag;
	if (digit[0] == '-')
	{flag = 1;}
	else
		{flag = 0;}
	return (flag);
}
