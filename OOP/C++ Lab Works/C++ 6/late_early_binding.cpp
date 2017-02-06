/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF 
 * PURE VIRTUAL CLASS, ABSTRACT CLASS AND LATE 
 * BINDING IN THE POLYMORPHISM*/
 
 /* NAME: SAGAR GIRI, ROLL: 205 , SECTION : A */
#include <iostream>
using namespace std;
class Base		//ABSTRACT CLASS
{
	public:
		virtual void show() = 0;	//PURE VIRTUAL FUNCTION
};
class Derived1 : public Base
{
	public:
		void show()
		{
			cout<<"This is Derived1..."<<endl;
		}
};
class Derived2 : public Base
{
	public:
		void show()
		{
			cout<<"This is Derived2..."<<endl;
		}
};
int main()
{
	Base *ptr;
	Derived1 dv1;
	Derived2 dv2;
	cout<<"Enter the choice 1 or 2"<<endl;
	int c;
	cin>>c;
	
	//THE OUTPUT DEPENDS ON THE USER INPUT i.e. IN RUN-TIME
	if(c == 1)
	{
		ptr = &dv1;
	}
	else
	{
		ptr = &dv2;
	}
	ptr -> show();
return 0;
}
