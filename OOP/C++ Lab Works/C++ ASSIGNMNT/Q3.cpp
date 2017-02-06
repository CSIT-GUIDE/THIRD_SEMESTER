/*Write a program that covers:
	unary operator
*/
#include <iostream>
using namespace std;
class count
{
	private:
		int data;
	public:
		void operator++(int )
		{
			data = 0;
			cout<<"original data :"<<data<<endl;
			data++;
			cout<<"after ++ : "<<data<<endl;
		}
		void operator--(int )
		{
			data = 1;
			cout<<"original data :"<<data<<endl;
			data--;
			cout<<"after -- : "<<data<<endl;
		}
};
int main()
{
	count c1,c2;
	c1++;
	c2--;
return 0;
}
