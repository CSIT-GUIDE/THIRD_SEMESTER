#include <iostream>
using namespace std;
class triangle
{
	private:
		char ch = '*';
	public:
	void display()
	{
		int i,j;
		for (i=0;i<6;i++)
		{
			for(j=0;j<i;j++)
			{
				cout<<ch;
			}
			cout<<endl;
		}
		for (i=6;i>0;i--)
		{
			for(j=i;j>0;j--)
			{
				cout<<ch;
			}
			cout<<endl;
		}
	}
};

int main()
{
	triangle t1;
	t1.display();
}
