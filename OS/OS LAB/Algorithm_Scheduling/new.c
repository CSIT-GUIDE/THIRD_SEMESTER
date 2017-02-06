#include <stdio.h>
void RR(int [], int []);
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
	int time,Q=4,i;
	float sum_wait=0.0,sum_turnaround = 0.0;
	int old_time[5],total_burst=0,temp[5],wait[5],turn[5];
	
	printf("Process | Arrival Time | Burst Time\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for(i=0;i<5;i++)
	{
		printf("P[%d]\t|%d\t     |%d\n",i+1,A[i],B[i]);
		total_burst += B[i];
		old_time[i] = 0;
		temp[i] = B[i];
		wait[i] = 0;
		turn[i] = 0;
	}
	printf("\n\n\n");
	for(time=0,i=0;total_burst != 0;i++)
	{
		if(i==5)
		{
			i = 0;
		}
		if(A[i] <= time)
		{
			if(temp[i] <= Q && temp[i] > 0)
			{
				wait[i] += (time - old_time[i]);
				time += temp[i];
				old_time[i] = time;
				total_burst -= temp[i];
				temp[i] = 0;
				turn[i] = wait[i] + B[i];
				printf("|P%d\t",i+1);
			}
			else if(temp[i] > 0)
			{
				wait[i] += (time - old_time[i]);
				time += Q;
				old_time[i] = time;
				total_burst -= Q;
				temp[i] -= Q;
				turn[i] = wait[i] + B[i];
				printf("|P%d\t",i+1);
			}
		}
		
	}
	for(i=0;i<5;i++)
	{
		sum_wait += wait[i];
		sum_turnaround += turn[i]; 
	}
	
	
	printf("\n\n\nProcess | wait Time  | TurnAround Time\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	for(i=0;i<5;i++)
	{
		printf("P[%d]\t|%d\t     |%d\n",i+1,wait[i],turn[i]);
	}
	
	//printf("\n\nsum_wait = %f \t sum_turnaround = %f\n\n",sum_wait,sum_turnaround);
	printf("av_sum_wait = %.2f \t av_sum_turnaround = %.2f",(sum_wait/5) ,(sum_turnaround/5));
}
