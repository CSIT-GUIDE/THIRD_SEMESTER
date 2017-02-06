#include <stdio.h>
#define ROW 100
#define COL 4
#define MAX 182

int main()
{
	char memory[ROW][COL],x,inp[MAX];
	int i=0,j,k=0;
	FILE *fptr;
	
	fptr = fopen("OS.txt","r+");
		while(!feof(fptr) && i<MAX)
		{
			fscanf(fptr,"%c",&x);
			inp[i] = x;
			i++;
		}
	fclose(fptr);
	
	for (i=0;i<MAX;i++)
	{
		printf("%c",inp[i]);
	} 

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(inp[k]=='$' && inp[k+1]=='A' && inp[k+2]=='M' && inp[k+3]=='J')
			{
				k += 16;
			}
			
			memory[i][j]=inp[k+=1];
			
			if(inp[k]=='$' && inp[k+1]=='D' && inp[k+2]=='T' && inp[k+3]=='A')
				continue;
		}
	}	
			
			printf("\n\n******************************\n\n");
				
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
				printf("%c",memory[i][j]);
		}
	}
return 0;
}
