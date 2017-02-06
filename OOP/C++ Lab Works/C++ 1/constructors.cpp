/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF CONSTRUCTORS.
 * CONSTRUCTORS:- CONSTRUCTORS ARE THE MEMBER FUNCTION WHICH
 * HAS THE SAME NAME AS THAT OF THE CLASS, AND IS CALLED 
 * AUTOMATICALLY WHENEVER THE OBJECT IS CREATED.*/
 
 /*NAME : SAGAR GIRI, ROLL NO. 205 , SECTION : A
 * DATE : 21-FEB-2014*/
#include <iostream>
using namespace std;
class counter
{
	private:
		unsigned int count;
	public:
		counter()
		{
			count = 0;
		}
		void increment()
		{
			count++;
		}
		void display()
		{
			cout<<count<<endl;
		}
};
int main()
{
	counter c1,c2;
	c1.display();
	c2.display();
	c1.increment();
	c1.increment();
	c2.increment();
	
	c1.display();
	c2.display();
}
