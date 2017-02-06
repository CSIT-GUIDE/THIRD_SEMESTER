/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF
 * C++ OBJECTS AS DATA TYPES*/
 
/*NAME : SAGAR GIRI, ROLL NO. 205 , SECTION : A
 * DATE : 21-FEB-2014*/
#include <iostream>
using namespace std;
class distances
{
	private:
		int feet;
		float inches;
	public:
		void getdistance()
		{
			cout<<"Enter feet and inches:";
			cin>>feet>>inches;
		}
		void setdistance(int ft,float in)
		{
			feet = ft;
			inches = in;
		}
		void display()
		{
			cout<<feet<<"\'-"<<inches<<"\"";
		}
};
int main()
{
	distances d1,d2; //OBJECTS d1 & d2 AS DATA TYPES
	d1.getdistance();
	d2.setdistance(6,4.3);
	cout<<endl<<"distance one:";
	d1.display();
	cout<<endl<<"distance two:";
	d2.display();
}
