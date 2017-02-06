#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void MOS(int SI);//MASTER MODE
void Read();
void Write();
void Terminate();
void LOAD();
void STARTEXECUTION();//END OF MASTER MODE
void EXECUTEUSERPROGRAM();//SLAVE MODE
int convertNum(char IR[]);

FILE *fr;
FILE *fw;

char MEM[100][4];//MEMORY
char C='F';

int IC,M=0;//Memory pointer
int SI;//MASTER MODE Operation selector
int ntemp;

void main(){
	
	SI=3;
	fr = fopen("sample.txt","r");//file to take input
	fw = fopen("output.txt","a");//file to display output
	
	MOS(SI);
	
}

void MOS(int SI){//MASTER MODE
	switch(SI){
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

void Read(){
	//task to be divided
}
void Write(){
	//task to be divided
}
void Terminate(){
	fprintf(fw,"\n\n");
	LOAD();
}

void LOAD(){
	char str[41];
	int i,j,strsize,strend,row,col=0;
	
	while(fgets(str,41,fr)!= NULL){
		
		row = M;
		
		if(str[0]=='$'&&str[1]=='A'&&str[2]=='M'&&str[3]=='J')
			continue;
		
		else if(str[0]=='$'&&str[1]=='D'&&str[2]=='T'&&str[3]=='A'){
			STARTEXECUTION();
		}
		
		else if(str[0]=='$'&&str[1]=='E'&&str[2]=='N'&&str[3]=='D'){
			fclose(fr);
			fclose(fw);
			exit(0);
		}
		
		//load program card to memeory
		strsize = strlen(str);
		
		if(M==100){
			printf("Memory Full!!");
			exit(1);
		}
		
		if(strsize==1&&str[0]!='H'){
				continue;
		}
		
		for(i=0; i<strsize; i++)
		{
			MEM[M][col] = str[i];
				col++;
			if(col == 4)
			{
				M++;
				col = 0;
			}
		}//end for

		if(strsize < 40)
		{
			strend = (M/10)*10 + 9;//string end
			while(M <= strend)
			{
				MEM[M][col] = ' ';
				col++;
				if(col == 4)
				{
					M++;
					col = 0;
				}
			}//end while	
		}//end if
		//end load
		
	}//end while
}

void STARTEXECUTION(){
	IC=0;
	EXECUTEUSERPROGRAM();
}//END MASTER MODE

void EXECUTEUSERPROGRAM()//SLAVE MODE
{
	int i;
	char IR[4],R[4];
	
	while(1){
		for(i = 0; i < 4; i++){//IR <- M[IC]
			IR[i]=MEM[IC][i];
		}
		IC+=1;
		
		//Compare IR[0,1]
		if(IR[0]=='L'&&IR[1]=='R'){
			//Anju's Part
			ntemp=convertNum(IR);
		}	
		
		else if(IR[0]=='S'&&IR[1]=='R'){
			//Sanjeev's Part
			ntemp=convertNum(IR);
		}
		
		else if(IR[0]=='C'&&IR[1]=='R'){
			//Prajjwol's Part
			ntemp=convertNum(IR);
		}
		
		else if(IR[0]=='B'&&IR[1]=='T'){
			if(C=='T'){  //IC <- IR[3,4]
				IC=convertNum(IR);
			}	
		}
		
		else if(IR[0]=='G'&&IR[1]=='D'){
			SI=1;
			MOS(SI);	
		}
		
		else if(IR[0]=='P'&&IR[1]=='D'){
			SI=2;
			MOS(SI);
		}
		
		else if(IR[0]=='H'){
			SI=3;
			MOS(SI);
		}
	}//end compare
}

int convertNum(char IR[]){//returns IR[2,3] in int 
	int x,y;
	char ctemp[2];
		//convert IR[2] to int
		ctemp[0]=IR[2];
		ctemp[1]='\0';
		x=atoi(ctemp);
	
		//convert IR[3] to int
		ctemp[0]=IR[3];
		ctemp[1]='\0';
		y=atoi(ctemp);
	
		return(x*10+y);	
}
