/* Write a program that substitute overloaded +=operator. */
#include <iostream>
using namespace std;
class Distance
{
		private:
			int feet;float inches;
		public:
			Distance()
			{feet = 0;inches = 0.0;}
			
			Distance(int ft, float in)
			{ feet = ft; inches = in;}
			
			void operator += (Distance dd2)
			{
				feet = feet+dd2.feet;
				inches = inches + dd2.inches;
				if(inches >= 12.0)
				{
					feet++;
					inches -= 12.0;
				}
			}
			void display()
			{
				cout<<"d1 : "<<feet<<"\'-"<<inches<<"\"";
			}
};
int main()
{
	Distance o1(2,11.3),o2(3,4.5);
	cout<<"before opetation";
	cout<<endl<<"Distance 1 :";o1.display();
	cout<<endl<<"Distance 2 :";o2.display();
	o1 += o2;
	cout<<endl<<"after opetation";
	cout<<endl<<"Distance 1 :";o1.display();
	cout<<endl<<"Distance 2 :";o2.display();
return 0;
}
