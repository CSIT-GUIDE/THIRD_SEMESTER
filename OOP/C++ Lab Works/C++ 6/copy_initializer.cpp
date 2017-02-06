#include<iostream>
using namespace std;
class Complex{
	private:
		int real, imag;
	public:
		Complex(){
			real=imag=0;
		}
		Complex(int r, int i){
			real=r;
			imag=i;
		}
		Complex(Complex &x){
			real = x.real;
			imag = x.imag;
		}
		
		void display(){
			cout<<"("<<real<<","<<imag<<"i)"<<endl;
		}
		void operator=(Complex &);
};

void Complex::operator=(Complex &x){
	real = x.real;
	imag = x.imag;
}
int main(){
	Complex c1(5,4),c2(6,4);
	Complex c3=c1;
	
	cout<<"C3 = ";c3.display();
	Complex c4,c5;
	c4=c2;
	
	cout<<"C4 = ";c4.display();
}
