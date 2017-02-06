/*Write a program that covers function overloading.*/
#include <iostream>
using namespace std;
class counter
{
	private:
		int count;
	public:
		void counts()
		{
			count = 0;
			for(int i=0;i<5;i++)
			{
				count++;
				cout<<count<<endl;
			}
		}
		
		void counts(int cc)
		{
			count = cc;
			count++;
			cout<<count<<endl;
		}
};
int main()
{
	counter c1,c2;
	cout<<"first count"<<endl;
	
	c1.counts();
	cout<<"second count"<<endl;
	c2.counts(4);
	return 0;
}
