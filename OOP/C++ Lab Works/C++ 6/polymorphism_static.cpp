/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF VIRTUAL 
 * FUNCTION AND EARLY BINDING OF STATIC POLYMORPHISM*/
 
 /* NAME: SAGAR GIRI, ROLL: 205, SECTION: A*/
#include <iostream>
using namespace std;
class Base	//ABSTRACT CLASS
{
	public:
		virtual void show()		
		{	
			cout<<"This is base..."<<endl;
		}
};
class Derived1 : public Base
{
	public:
		void show()
		{
			cout<<"This is derived one..."<<endl;
		}
};
class Derived2 : public Base 
{
	public:
		void show()
		{
			cout<<"This is derived two..."<<endl;
		}
};
int main()
{
	Base *ptr; //BASE CLASS POINTER
	
	/* BASE CLASS POINTER COULD HOLD THE
	 * ADDRESS OF DERIVED CLAAS'S OBJECT
	 * AND VICE-VERSA IS NOT POSSIBLE*/
	 
	Derived1 dv1;
	Derived2 dv2;
	ptr = &dv1;
	ptr -> show();
	
	ptr = & dv2;
	ptr -> show();
return 0;
}
