#include <iostream>
using namespace std;
class Static 
{
	private:
		static int i;
	public:
		Static()
		{
			i = 0;
		}
		void incremrent()
		{
			i++;
		}
		void display()
		{
			cout<<"i = "<<i<<endl;
		}
};
int main()
{
	Static o1;
	o1.incremrent();
	o1.display();
	o1.incremrent();
	o1.display();
	o1.incremrent();
	o1.incremrent();
	o1.display();
return 0;
}
