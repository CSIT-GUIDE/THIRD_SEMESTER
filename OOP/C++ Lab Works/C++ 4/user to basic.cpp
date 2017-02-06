/* C++ Program to illustrate the concept of UserDefined to basic 
 * type-conversion using operator function*/
 
/*Name : Sagar giri, Roll No. 205, Section: A*/
#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet; float inches;
	public:
		Distance()
		{ feet = 0; inches = 0.0; }
		Distance(int ft, float in)
		{
			feet = ft;
			inches = in;
		}
		operator float ()
		{
			float mt;
			mt = (feet + inches/12.0)/3.28;
			return(mt);
		}
		void display()
		{
			cout<<"distance in feet = "<<feet<<"\'-"<<inches<<"\""<<endl;
		}
};
int main()
{
	Distance d1(16,4.8);
	d1.display();
	float mtr;
	mtr = d1;
	cout<<"Distance in meters = "<<mtr<<" meters"<<endl;
return 0;
}
