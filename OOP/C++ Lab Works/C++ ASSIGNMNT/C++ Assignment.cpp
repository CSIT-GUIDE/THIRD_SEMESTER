/* Write a program that covers features of OOP like:
	Object and Class
	Operator Overloading
	Constructor Overloading
 */


#include <iostream>
using namespace std;
class Distance
{
private:
int feet; float inches;
public:
Distance() //DEFAULT CONSTRUCTOR
{feet = 0; inches= 0.0;}
Distance(int ft, float in) //TWO ARGUMENT CONSTRUCTOR
{ feet = ft; inches = in;}
Distance operator+(Distance dd2) //OVERLOADING '+' OPERATOR
{
int ft;float in;
ft = feet+dd2.feet;
in = inches+dd2.inches;
if(in >= 12.0)
{
in -= 12.0;
ft++;
}
return Distance(ft,in);
}
void display()
{
cout<<feet<<"\'-"<<inches<<"\""<<endl<<endl;
}
};
int main()
{
Distance d1(5,7.3),d2(6,9.4),d3;
d3=d1+d2;
cout<<"sum of ";d1.display();cout<<"and ";d2.display();
cout<<"is: ";d3.display();
return 0;
}
