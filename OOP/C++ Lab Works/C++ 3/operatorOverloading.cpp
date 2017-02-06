/* C++ PROGRAM TO DEMONSTRATE THE UNARY OPERATOR ++ OVERLOADING
 * (POSTFIX) AND RETURNING NAMELESS OBJECTS */
 
/* NAME: SAGAR GIRI, ROLL NO. 205, SECTION : A*/

#include <iostream>
using namespace std;
class Counter
{
	private :
		unsigned int count;
	public:
			Counter()
			{count = 0;}
			
			int getcount()
			{
				return (count);
			}
			
			void operator ++(int)
			{
				count++;
			}
};

int main()
{
	Counter c1, c2;
	cout << "Count one = " << c1.getcount() << endl;
	cout<< "Count two = " << c2.getcount() << endl;
	c1++;
	c2++;
	c2++;	
	cout << "Count one = " << c1.getcount() << endl;
	cout << "COunt two = " << c2.getcount() << endl;
}
			
