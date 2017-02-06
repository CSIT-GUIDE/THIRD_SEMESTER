#include <iostream>
using namespace std;
class Complex
{
	private:
		int real, imag;
		static int total;
			int id;
	public:
		Complex()
		{
			real = 0;
			imag = 0;
			total ++;
		}
		Complex(int r, int i)
		{
			real = r;
			imag = i;
			total++;
			id = total;
		}
		static void showTotal()
		{
			cout<<"Total is = "<<total<<endl;
		}
		void showComplex()
		{
			cout<<"("<<real<<"+"<<imag<<"i)"<<endl;
		}
		Complex(Complex &x)
		{
			cout<<"Copy Constructor is called"<<endl;
			real = x.real;
			imag = x.imag;
			total ++;
		}
		void operator =(Complex &);
};
int Complex::total = 0;
void Complex::operator =(Complex &x)
{
	cout<<"Assignment operator is called"<<endl;
	real = x.real;
	imag = x.imag;
}
int main()
{
	Complex c1(5,6),c2(6,4);
	Complex::showTotal();
	Complex c3=c1;
	Complex::showTotal();
	cout<<"c1 = ";c1.showComplex();
	cout<<"c2 = ";c2.showComplex();
	cout<<"c3 = ";c3.showComplex();
	Complex c4;
	c4 = c2;
	Complex::showTotal();
	cout<<"c4 = ";c4.showComplex();
return 0;
}

