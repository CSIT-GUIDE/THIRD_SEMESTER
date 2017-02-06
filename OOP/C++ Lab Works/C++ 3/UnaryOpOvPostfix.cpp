/*THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF UNARY 
 * OPERATOR '++' (POSTFIX) OVERLOADIGNG AND RETURNING NAMELESS OBJECT. */
 
/* NAME: SAGAR GIRI, ROLL NO. 205, SECTION : A*/

#include <iostream>
using namespace std;
class Counter
{	
	private: 
		int count;		
	public:			
		Counter() //DEFAULT CONSTRUCTOR
		{count =0;}	
		
		Counter(int c) //ONE ARGUMENT CONSTRUCTOR
		{
			count = c;
		}
		
		int getcount()
		{	
			return count;
		}
		
		Counter operator++(int) //OPERATOR OVERLOADING FOR ++ POSTFIX OPERATION
		{
			return Counter(count++);  
			/*It does three functions 
			 * 1. create nameless object
			 * 2. return count 2 and 
			 * 3. increase count by 1 */
		}
	
};

int main()
{
	Counter C1, C2;
	cout << "Count one = " << C1.getcount() << endl;
	cout << "Count two = " << C2.getcount() << endl;
	C1++;
	C1++;
	C2 = C1++;
	cout << "Count one = " << C1.getcount() << endl;
	cout << "Count two = " << C2.getcount() <<endl;
}
