#include <stdio.h>
void RR(int [], int []);
//void Priority(int [], int [], int []);
//void SJF(int [], int []);

int main()
{
	int A[] = {0,2,4,4,6};
	int B[] = {5,8,6,4,7};
	//int P[] = {1,5,4,3,2};

	RR(A,B);
	//Priority(A,B,P);
	//SJF(A,B);
return 0;
}

void RR(int A[], int B[])
{
	int time,remain=5,Q=4,flag = 0,sum_wait=0,sum_turnaround = 0,i;
	
	printf("Process | Arrival Time | Burst Time\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for(i=0;i<5;i++)
	{
		printf("P[%d]\t|%d\t     |%d\n",i+1,A[i],B[i]);
		//remain_time[i] = B[i];
	}
	printf("\n\n");
	printf("\n\nProcess\t|Turnaround time|waiting time\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for(time=0,i=0;remain!=0;)
	{
		if(B[i]<=Q && B[i]>0)
		{
		  time += B[i];
		  B[i]=0;
		  flag=1;
		}
		else if(B[i]>0)
		{
		  B[i]-=Q;
		  time+=Q;
		}
		if(B[i]==0 && flag==1)
		{
		  remain--;
		  printf("P[%d]\t|\t%d\t|\t%d\n",i+1,time-A[i],time-A[i]-B[i]);
		  sum_wait+=time-A[i]-B[i];
		  sum_turnaround+=time-A[i];
		  flag=0;
		}
		if(i==4)
		  i=0;
		else if(A[i+1]<=time)
		  i++;
		else
		  i=0;
	  }
  
	  //printf("\nAvg sum_wait = %f\n",sum_wait*1.0/n);
	  //printf("Avg sum_turnaround = %f",sum_turnaround*1.0/n);4
}
//void SJF(int A[], int B[])
//{
	//int tempArr[5];
	//int temp,i,j,time = 0,process = 5;
	
	//printf("Process | Arrival Time | Burst Time\n");
	//printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	//for(i=0;i<5;i++)
	//{
		//printf("P[%d]\t|%d\t     |%d\n",i+1,A[i],B[i]);
		////remain_time[i] = B[i];
	//}
	
	//for(i=0;i<4;i++)
	//{
		//for(j=i;j<5;j++)
		//{
			//if(B[i] > B[j])
			//{
				//temp = B[i];
				//B[i] = B[j];
				//B[j] = temp;
			//}
		//}
	//}
	//for(i=0;i<5;i++)
	//{
		//printf("%d",B[i]);
		//tempArr[i] = B[i];
	//}
	//printf("\n");
	//time = 0;
	//for(i=0;i < 5;i++)
	//{
		//if(A[i] == 0)
		//{
			//printf("P[1] is executed\n");
			//time += B[i];
		//}
		//else if (A[i] >= B[i])
		//{
			//time += B[i];
		//}
	//}
	//printf("%d",time);
	
//}
