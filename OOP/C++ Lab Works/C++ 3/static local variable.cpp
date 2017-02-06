/*THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF THE STATIC LOCAL VARIABLE.
 * LIFETIME OF STATIC VARIABLE IS THROUGHOUT THE PROGRAM */
 
/* NAME: SAGAR GIRI, ROLL NO. 205, SECTION : A*/

#include <iostream>
using namespace std;
float findavg(float );
int main()
{
	float avg,data=1;
	while(data!= 0)
	{
		cout<<endl<<"Enter Data"<<endl;
		cin>>data;
		avg = findavg(data);
		cout<<"New Average= "<<avg;
	}
return 0;
}
float findavg(float d)
{
	static int count = 0;	//static local integer variable
	static float total = 0.0; //static local float variable
	count++;
	total = (total+d);
	return (total/count);
}		
