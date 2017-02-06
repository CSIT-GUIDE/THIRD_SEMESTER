/*THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF OBJECTS AS
 * FUNCTION ARGUMENTS USING CONSTRUCTORS*/
 
 /*NAME : SAGAR GIRI, ROLL NO. 205 , SECTION : A
 * DATE : 21-FEB-2014*/
 
#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() //DEFAULT CONSTRUCTOR
		{
			feet =0;
			inches =0.0;
		}
		Distance(int ft, float in)//TWO ARGUMENT CONSTRUCTOR
		{
			feet = ft;
			inches = in;
		}
		void adddistance(Distance dd1,Distance dd2)
		{
			feet = dd1.feet+ dd2.feet;
			inches = dd1.inches+dd2.inches;
			if(inches >= 12.0)
			{
				feet++;
				inches -= 12.0;
			}
		}
		void display()
		{
			cout<<feet<<"\'-"<<inches<<"\""<<endl;
		}	
};
int main()
{
	Distance d1(5,7.3),d2(6,9.4),d3;
	cout<<"Distance 1= ";
	d1.display();
	cout<<"Distance 2= ";
	d2.display();
	d3.adddistance(d1,d2);
	cout<<"Distance 3 (TOTAL)= ";
	d3.display();
}
