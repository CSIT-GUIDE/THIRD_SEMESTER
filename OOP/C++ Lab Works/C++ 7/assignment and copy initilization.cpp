/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF ASSIGNMENT AND 
 * COPY INITILIZATION */

/* NAME: SAGAR GIRI, ROLL No. 205 , SECTION: A*/
#include <iostream>
using namespace std;
class Complex
{
	private:
		int real;int imag;
	public:
		Complex() 				//DEFAULT CONSTRUCTOR
		{	real=0; imag=0;	}
		Complex(int r,int i)	//2 ARGUMENT CONSTRUCTOR
		{
			real = r;
			imag = i;
		}
		Complex(Complex &x)		//COPY CONSTRUCTOR
		{
			real = x.real;
			imag = x.imag;
		}
		void display()
		{
			cout<<"("<<real<<"+"<<imag<<"i)"<<endl;
		}
		void operator = (Complex &);	//OPERATOR OVERLOAD FOR ASSIGNMENT
};
void Complex::operator =(Complex &x)
{
	real = x.real;
	imag = x.imag;
}
int main()
{
	Complex c1(5,6),c2(6,4);
	Complex c3 = c1;			//INITILIZATION:CALLS COPY CONSTRUCTOR
	cout<<"c3 = ";c3.display();
	Complex c4;
	c4 =c2;						//ASSIGNMENT: CALLS OPERATOR = OVERLOADING
	cout<<"c4 = ";c4.display();
return 0;
}
