/* THIS PROGRAM ILLUSTRATES THE CONCEPT OF "CONST" QUALIFIER
 * "CONST" IS A KEYWORD IN C++
 * "CONST" QUALIFIER CAN'T BE MODIFIED */

/*NAME : SAGAR GIRI, SECTION: A, ROLL NO. 205 */

#include <iostream>

using namespace std;

class Distance
{
	private:
		int feet; float inches;
	public:
		Distance()
		{
			feet = 0;inches=0.00;
		}
		Distance (int ft, float in)
		{
			feet = ft; inches = in;
		}
		void display() const //constant display function(can't be modified)
		{ 
			cout<<feet<<"\'-"<<inches<<"\""<<endl;
			//here we cannot do feet++ or inches++
		}
}; //end class Distance
int main()
{
	Distance d1(5,7.6),d2;
	const int a = 5;
	a++;
	cout<<"Distance One=";d1.display();
	cout<<"distance Two=";d2.display();
}
