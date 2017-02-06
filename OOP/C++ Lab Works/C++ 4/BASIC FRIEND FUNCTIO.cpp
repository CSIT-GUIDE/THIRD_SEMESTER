/* This C++ program illustrates the general concept of FRIEND Function
 * Whwnever a class declared a function which is not the member 
 * function as friend, then that function can access the private content
 * of class. */
 
 /*NAME: Sagar Giri, Roll No. 205, Section: A*/
#include <iostream>
using namespace std;
class beta;
class alpha
{
	private:
		int a;
	public:
		alpha()
		{
			a = 5;
		}
		friend void sum(alpha, beta);
};
class beta
{
	private:
		int b;
	public:
		beta()
		{
			b = 10;
		}
		friend void sum(alpha, beta); //declaring friend function
};

//this friend function can access the private content of the class

void sum(alpha x, beta y) 
{
	cout<<"sum ="<<x.a+y.b;
}

int main()
{
	alpha A;
	beta B;
	sum(A,B);
return 0;
}
