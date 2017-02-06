/*THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF DEFINING A MEMBER
 * FUNCTION OUTSIDE A CLASS*/

/*NAME : SAGAR GIRI, ROLL NO. 205 , SECTION : A
 * DATE : 21-FEB-2014*/
#include <iostream>
using namespace std;
class complex
{
	private:
		int real,imag;
	public:
		complex()
		{
			real = imag = 0;
		}
		complex(int r, int i)
		{
			real = r;
			imag = i;
		}
		void display();
		void addcomplex(complex, complex);
};
void complex::addcomplex(complex cc1,complex cc2)
{
	real = cc1.real+cc2.real;
	imag = cc1.imag+cc2.imag;
}
void complex::display()
{
	cout <<real<<"+"<<imag<<"i"<<endl;
}
int main()
{
	complex c1(5,7),c2(4,2),c3;
	c1.display();
	c2.display();
	c3.addcomplex(c1,c2);
	cout<<"total complex = ";
	c3.display();
}
