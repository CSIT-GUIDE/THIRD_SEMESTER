
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

FILE *fr;
FILE *fw;
int M = 0;
char MEM[100][4];

void LOAD(){
	char str[41];
	int i,j,n,count,row,col=0;
	
	while(fgets(str,41,fr)!= NULL){
		row = M;
		if(str[0]=='$'&&str[1]=='A'&&str[2]=='M'&&str[3]=='J')
			continue;
		else if(str[0]=='$'&&str[1]=='D'&&str[2]=='T'&&str[3]=='A'){
			//printf("You did it!!");
			//getch();
			//STARTEXECUTION();
			break;
		}
		else if(str[0]=='$'&&str[1]=='E'&&str[2]=='N'&&str[3]=='D'){
			exit(0);
		}
		//load program card to memeory
		n = strlen(str);
		if(M==100)
		{
			printf("Memory Full!!");
			exit(1);
		}
		
		if(n == 1 && str[0] != 'H')
		{
			continue;
		}
		
		for(i=0; i<n; i++)
		{
			MEM[M][col] = str[i];
			col++;
			if(col == 4)
			{
				M++;
				col = 0;
			}
		}
		
		if(n < 40)
		{
			count = (M/10)*10 + 9;
			while(M != count)
			{
				MEM[M][col] = ' ';
				col++;
				if(col == 4)
				{
					M++;
					col = 0;
				}
			}
		}
		//printf("\n");
		/*for(i=row; i<row+9; i++)
		{
			for(j=0; j<4; j++)
			{
				printf("%c",MEM[i][j]);
			}
		}
		printf("\n");*/
		M = M + 10;
	}
	
}

void Terminate(){
	fprintf(fw,"\n\n");
	LOAD();
}

void MOS(int SI){
	switch(SI){
		/*case 1:
			Read();
			break;
		case 2:
			Write();
			break;*/
		case 3:
			Terminate();
			break;
	}
}
int main()
{
	
	//initialize memory
	int i, j;
	for(i=0; i<100; i++)
	{
		for(j=0; j<4; j++)
		{
			MEM[i][j] = ' ';
		}
	}
	int SI=3;
	fr = fopen("sample.txt","r");
	fw = fopen("output.txt","a");
	
	MOS(SI);
	
	fclose(fr);
	fclose(fw);
return 0;
}
