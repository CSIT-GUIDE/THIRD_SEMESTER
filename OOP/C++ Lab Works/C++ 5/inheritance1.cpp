/* THIS C++ PROGRAM ILLUSTRSTES THE CONCEPT OF 
 * SINGLE INHERITANCE WITH DERIVED CLASS CONSTRUCTOR */
 
/* NAME : SAGAR GIRI, ROLL : 205, SECTION : A */

#include <iostream>
using namespace std;
class Counter					//base class
{
	protected:
		unsigned int count;
	public:
		Counter() : count(0)	//base class default constructor
		{		}
		Counter(int c)			//base class one argument constructor
		{	count = c;	}
		Counter operator ++()
		{	return Counter(++count);	}
		int getCount()
		{	return count;	}
};

class CountDn : public Counter		//publicly derived class from base class
{
	public:
		CountDn():Counter(0)	//derived class default constructor calling base class default constructor
		{		}
		CountDn(int x):Counter(x)   //derived class one argument constructor 
		{		}					//calling base class one argument constructor
		Counter operator--()
		{	return Counter(--count);	}
};

int main()
{
	CountDn C1(5),C2;  //define ojects of derived class
	++C1;++C1;++C1;
	++C2;
	cout<<"Count 1 ="<<C1.getCount()<<endl;
	cout<<"Count 2 ="<<C2.getCount()<<endl;
	--C1;--C2;
	cout<<"Count 1 ="<<C1.getCount()<<endl;
	cout<<"Count 2 ="<<C2.getCount()<<endl;
return 0;
}
