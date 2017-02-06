#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void MOS(int SI);
void Read();
void Write();
void Terminate();
void LOAD();
void STARTEXECUTION();
void EXECUTEUSERPROGRAM();
int convertNum(char IR[]);

FILE *fr;				//input File pointer
FILE *fw;				//output file pointer

int M=0,IC,SI,col=0;
char MEM[100][4];		//Virtual Memory of size 100 x 4
char Reg[4],IR[4];		//Reg = Register , IR = Instruction Register

int main()
{
	SI=3;
	fr = fopen("mos.txt","r");
	fw = fopen("output.txt","w");
	MOS(SI);	
return 0;
}

void MOS(int SI)
{
	switch(SI)
	{
		case 1:
			Read();
			break;
		case 2:
			Write();
			break;
		case 3:
			Terminate();
			break;
	}
}

void Read()
{
	int i,j,temp,count=0;
	//printf("\nRead");
	temp = convertNum(IR);
	IR[4] = 0;
	char ctemp[41];
		fgets(ctemp,41,fr);
		for(i=temp;i<=(temp+9);i++)
		{
			for(j=0;j<4;j++)
			{
				MEM[i][j] = ctemp[count++];
			}
		}
}
void Write()
{
	int i,j;
	IR[3]=0;
	char ctemp[40];
	int temp,count =0;
	
	temp=convertNum(IR);
	
	for(i=temp;i<=(temp + 9);i++){
		for(j=0; j<4; j++)
		{
			ctemp[count++] = MEM[i][j];
		}
	}
	fputs(ctemp,fw);
	fprintf(fw,"\n");
}
void Terminate()
{
	fprintf(fw,"\n\n");
	LOAD();
}

void LOAD()
{
	char str[41];
	int i,n,stringend,col=0;
	
	while(fgets(str,41,fr)!= NULL)
	{
		
		if(str[0]=='$'&&str[1]=='A'&&str[2]=='M'&&str[3]=='J')
			continue;
		
		else if(str[0]=='$'&&str[1]=='D'&&str[2]=='T'&&str[3]=='A')
		{
			STARTEXECUTION();
		}
		
		else if(str[0]=='$'&&str[1]=='E'&&str[2]=='N'&&str[3]=='D')
		{		
			fclose(fr);
			fclose(fw);
			exit(0);
		}
		
		//load program card to memeory
		n = strlen(str);
		
		if(M==100)
		{
			//printf("Memory Full!!");
			exit(1);
		}
		
		if(n==1&&str[0]!='H')
		{
				continue;
		}
		
		//insert data from datacard to memory[0] to mempory[4]
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
			stringend = (M/10)*10 + 9; //string end 
			while(M <= stringend)
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
				
		//Display memory
		//printf("\n");
		//for(i=row; i<=row+9; i++)
		//{
			//for(j=0; j<4; j++)
			//{
				//printf("\tMEM[%d][%d]: %c",i,j,MEM[i][j]);
			//}
		//}
		//printf("\n");
		
	}
}

void STARTEXECUTION()
{
	IC=0;
	EXECUTEUSERPROGRAM();
}

void EXECUTEUSERPROGRAM()
{
	int i,count=1;
	int ntemp;
	
	while(1)
	{
		for(i = 0; i < 4; i++)
		{
			IR[i]=MEM[IC][i];
		}
		
		//for(i = 0; i < 4; i++)
		//{
			//printf("IR[%d]==%c  ",i,IR[i]);
		//}
		//printf("\n");
		IC+=1;
		
		if(IR[0]=='G'&&IR[1]=='D')
		{
			SI=1;
			MOS(SI); //input request
		}
		
		else if(IR[0]=='P'&&IR[1]=='D')
		{
			SI=2;
			MOS(SI); //output request
		}
		
		else if(IR[0]=='L'&&IR[1]=='R')
		{
			ntemp=convertNum(IR);
			for(i=0;i<4;i++)
			{
				Reg[i] = MEM[ntemp][i];  //load to the register
			}
			
		}	
		
		else if(IR[0]=='S'&&IR[1]=='R')
		{
			ntemp=convertNum(IR);
			for(i=0;i<4;i++)
			{
				MEM[ntemp][i] = Reg[i]; //write from register to memory
			}
			
		}
		
		else if(IR[0]=='H') //halt the MOS
		{
			SI=3;
			MOS(SI);
			break;
		}
		count++;
	}
}

int convertNum(char IR[]) //converts IT[2,3] to number
{
	int x,y;
	char chartemp[2];
		chartemp[0]=IR[2];
		chartemp[1]='\0';
		x=atoi(chartemp);
		chartemp[0]=IR[3];
		chartemp[1]='\0';
		y=atoi(chartemp);
return(x*10+y);
}
