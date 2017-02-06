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
		friend void sum(alpha, beta);
};

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
