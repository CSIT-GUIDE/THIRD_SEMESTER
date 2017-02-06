/*Write a program to compute subtraction of 
 * two complex numbers using operator overloading.*/
#include <iostream>
using namespace std;
class complex
{
	private:
		int real, imag;
	public:
		complex()
		{
			real = 0; imag = 0;
		}
		complex(int r, int i)
		{
			real = r; imag = i;
		}
		void subtraction(complex cc1, complex cc2)
		{
			real = cc1.real - cc2.real;
			imag = cc1.imag - cc2.imag;
		}
		void display()
		{
			if (imag >= 0)
			cout<<real<<"+"<<imag<<"i"<<endl;
			else
			cout<<real<<""<<imag<<"i"<<endl;
		}
};
int main()
{
	complex c1(4,3),c2(2,2),c3;
	c3.subtraction(c1,c2);
	c3.display();
return 0;
}
