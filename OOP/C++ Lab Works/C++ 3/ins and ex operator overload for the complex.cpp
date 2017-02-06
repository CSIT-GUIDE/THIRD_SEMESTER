#include <iostream>
using namespace std;
class complex
{
	private:
		int real , imag;
	public:
		complex()
		{ real= imag = 0; }
		
		complex(int r, int i)
		{
			real = r;
			imag = i;
		}
		
		friend istream & operator>>(istream &, complex &);
		friend ostream & operator<<(ostream &, complex &);
};
istream & operator >>(istream &  input, complex & cc1)
{
	cout<<"Enter real and imaginary part of complex"<<endl;
	input>>cc1.real>>cc1.imag;
	return input;
}
ostream & operator <<(ostream & output, complex & cc1)
{
	cout<<endl<<"The complex is:: ";
	cout<<cc1.real<<"+"<<cc1.imag<<"i";
	return output;
}
int main()
{
	complex c1, c2;
	cin>>c1>>c2;
	cout<<c1<<c2;
return 0;
}
