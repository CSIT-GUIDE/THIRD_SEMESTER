/*Write a program to cover parameterized constructor.*/
#include <iostream>
using namespace std;
class counter
{
	private:
		int data1;
		float data2;
	public:
		counter ()
		{
			data1 = 0 ; data2 = 0.0;
		}
		counter (int d1, float d2)
		{
			data1 = d1;
			data2 = d2;
			data1 += 5;
			data2 += 5.5;
		}
		counter(int dd1)
		{
			data1 = dd1;
			data1++;
			cout<<"1 argument  :"<<data1<<endl;
		}
		void display()
		{
			cout<<"data1 :  "<<data1<<"  data2 :"<<data2<<endl;
		}
};
int main()
{
	counter c1, c2(5,2.3),c3(5);
	c1.display();
	c2.display();
return 0;
}
