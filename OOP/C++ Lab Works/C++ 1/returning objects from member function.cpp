/*THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF 
 * RETURNING OBJECTS FROM THE MEMBER FUNCTION*/
 
 /*NAME : SAGAR GIRI, ROLL NO. 205 , SECTION : A
 * DATE : 21-FEB-201*/
 
#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance()
		{
			feet = 0;
			inches = 0.0;
		}
		Distance(int f,float i)
		{
			feet = f;
			inches = i;
		}
		void display()
		{
			cout<<feet<<"\'-"<<inches<<"\""<<endl;
		}
		Distance adddistance(Distance);
};
Distance Distance::adddistance(Distance dd2)
{
	Distance d;
	d.feet = feet+dd2.feet;
	d.inches = inches + dd2.inches;
	if(d.inches >= 12.0)
	{
		d.feet++;
		d.inches -= 12.0;
	}
	return d; //RETURNING THE OBJECT D
}

int main()
{
	Distance d1(4,6.2),d2(6,6.3),d3;
	d1.display();
	d2.display();
	d3 = d1.adddistance(d2);
	cout<<"Total Distance = ";
	d3.display();
}
