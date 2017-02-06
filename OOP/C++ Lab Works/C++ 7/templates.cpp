/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF TEMPLATE FUNCTION
 * AND ITS USE */
 
 /* TEMPLATES IS USED TO HANDLE THE SINGLE 
  * DEFINITION OF FUNCTION FOR MANY DATATYPES*/

/* NAME: SAGAR GIRI, ROLL No. 205, SECTION : A*/
#include <iostream>
using namespace std;
template <class T>		//FUNCTION TEMPLATE
T abs(T a)				//RETURNS VALUE OF 'T' DATATYPES
{
	if(a < 0)
		return (-a);
	else
		return a;
}
int main()
{
	int a = 5;
	int b = -6;
	float c = -3.5;
	float d = 4.5;
	cout<<"|a| = "<<abs(a)<<endl;	//CALLS ABS() FUNTION WITH INT DATA-TYPE
	cout<<"|b| = "<<abs(b)<<endl;
	cout<<"|c| = "<<abs(c)<<endl;	//CALLS ABS() FUNTION WITH FLOAT DATA-TYPE
	cout<<"|d| = "<<abs(d)<<endl;
return 0;
}
