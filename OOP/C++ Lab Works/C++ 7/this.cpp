/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF "this" POINTER*/
/* "this" POINTER IS USED TO REFER (THE ADDRESS) OF THAT OBJECT*/

/* NAME: SAGAR GIRI, ROLL No. 205, SECTION: A S*/
#include <iostream>
using namespace std;
class alpha
{
	private:
		int a;
	public:
		alpha()
		{ a = 0; }
		alpha(int x)
		{ a = x; }
		void displayAddress()
		{
			cout<<"Address is = "<<this<<endl;
		}
		void display()
		{
			cout<<"\ta = "<<a<<endl;
		}
};
int main()
{
	alpha a1;
	alpha a2(5);
	cout<<"Detials of a1 = "<<endl;
	a1.displayAddress();
	a1.display();
	cout<<"Detials of a2 = "<<endl;
	a2.displayAddress();
	a2.display();
return 0;
}
