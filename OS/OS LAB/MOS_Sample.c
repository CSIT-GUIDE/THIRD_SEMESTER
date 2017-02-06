#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 100
#define COL 4


FILE *fr, *fw;
char mem[ROW][COL];
int M = 0,IC= 0;
char REG[COL];

void LOAD();
void mos(int);
void TERMINTATE();
void READ(char [][]);
void STARTEXECUTION();
void EXECUTEUSERPROGRAM();

int main()
{
	fr = fopen("mos.txt","r");
	fw = fopen("output.txt","a");
	
	int SI = 3;
	mos(SI);
	
	fclose(fr);
	fclose(fw);
return 0;
}

void LOAD()
{
	int i=0, j=0,col = 0;
	char str[41];
	while(fgets(str,41,fr) != NULL)
	{
		int row = M;
		if(str[0] == '$' && str[1] == 'A' && str[2] == 'M' && str[3] == 'J')
			continue;
		else if(str[0] == '$' && str[1] == 'D' && str[2] == 'T' && str[3] == 'A')
		{
			STARTEXECUTION();
			break;
		}
		else if(str[0] == '$' && str[1] == 'E' && str[2] == 'N' && str[3] == 'D')
		{
				exit(0);
		}
		load program card to memory
		int n = strlen(str);
		if ( n==1 && str[0] != 'H')
		{
			continue;
		}
		for(i=0; i<n; i++)
		{
			mem[M][col] = str[i];
			col++;
			if(col == 4)
			{
				M++;
				col = 0;
			}
		}
		
		if(n < 40)
		{
			int count = (M/10)*10 + 9;//string end
			while(M <= count)
			{
				mem[M][col] = ' ';
				col++;
				if(col == 4)
				{
					M++;
					col = 0;
				}
			}	
		}		
		
		printf("\n n==%d\n",n);
		printf("str[0] == %c\n",str[0]);
		Display memory
		printf("\n");
		
		for(i=row; i<=row+9; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("\tMEM[%d][%d]: %c",i,j,mem[i][j]);
			}
		}
		printf("\n");
	}
}


void TERMINTATE()
{
	fprintf(fw,"\n\n"); //write to the destination file
	LOAD();
}

void mos(int SI)
{
	switch(SI)
	{
		/*
		case 1:
			READ();
			break;
		case 2:
			WRITE();
			break;*/
		case 3:
			TERMINTATE();
			break;
	}
}

void STARTEXECUTION()
{
	EXECUTEUSERPROGRAM();
}

void EXECUTEUSERPROGRAM()
{
	char IR[4];
	for(i=0;i<ROW;i++)	
	{
		IR[i] = mem[IC][i];
	}	
	IC += 1;
	if(IR[0] == 'L' && IR[1] == 'R')
	{
		int x = atoi(IR[2])*10+atoi(IR[3]);
		REG[i]= mem[x][i];
	}
	else if (IR[0] == 'S' && IR[1] == 'R')
	{
		
	}
}
