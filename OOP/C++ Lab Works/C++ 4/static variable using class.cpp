#include <iostream>
using namespace std;
class Stat
{
	private:
		 int j;
	public:
		Stat()
		{ j = 0; }
		void incremrent()
		{
			static int i=0;
			j = ++i; 
		}
		void display()
		{ cout<<"j = "<<j<<endl; }
};
int main()
{
	Stat o1;
	o1.display();
	o1.incremrent();
	o1.display();
	o1.incremrent();
	o1.display();
	o1.incremrent();
	o1.incremrent();
	o1.display();
return 0;
}
