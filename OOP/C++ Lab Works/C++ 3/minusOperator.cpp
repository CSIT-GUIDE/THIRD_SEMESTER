/*C++ PROGRAM TO SHOW THE DEMONSTRATION OF OVERLOADING BINARY 
 * - OPERATOR */
 
/* NAME: SAGAR GIRI, ROLL NO. 205, SECTION : A*/
#include <iostream>
using namespace std;
class Coordinate
{
	private :
		int xco, yco;
	public : 
		Coordinate()	//DEFAULT CONSTRUCTOR
		{xco = 0; yco = 0;}	
		
		Coordinate(int x, int y) //TWO ARGUMENT CONSTRUCTOR
		{
			xco = x;
			yco = y;
		}
		
		Coordinate operator-() //OVERLOADING '-' OPERATOR
		{
			return Coordinate(-xco, -yco);
		}
		
		void display()
		{
			cout << "(" << xco << "," << yco << ")";
		}
};

int main()
{
	Coordinate P1(5, -2), P2;
	cout <<"P1 ="; P1.display();
	cout <<endl;
	cout <<"P2 ="; P2.display();
	cout <<endl;
	
	P2 = P1;

	cout <<"P1 ="; P1.display();
	cout <<endl;
	cout <<"P2 ="; P2.display();
}
