/* C++ PROGRAM TO DEMONSTRATE THE UNARY OPERATOR ++ OVERLOADING
 * (PREFIX) AND RETURNING NAMELESS OBJECTS */
 
/* NAME: SAGAR GIRI, ROLL NO. 205, SECTION : A*/
#include<iostream>
using namespace std;
class Counter
{
	private :
		unsigned int count;
	public :
			Counter() //DEFAULT CONSTRUCTOR
			{count = 0;}
			
			int getcount()
			{
				return count;
			}
			
			Counter operator++()
			{
				++count;
				Counter temp;
				temp.count = count;
				return (temp);
			}
			
};

int main()
{
	
	Counter c1, c2; //CREATE 2 OBJECTS
	cout << "Count one =" << c1.getcount() <<endl;
	cout << "Count two =" << c2.getcount() <<endl;
	++c1; //INCREMENT COUNT OF OBJECT c1 BY 1
	++c2; //INCREMENT COUNT OF OBJECT c2 BY 1
	
	c2 = ++c1; //INCREMENT COUNT OF OBJECT c1 BY 1 AND ASSIGN TO c2
	
	cout << "Count one = " << c1.getcount() <<endl;
	cout << "Count two = " << c2.getcount() <<endl;
}				
