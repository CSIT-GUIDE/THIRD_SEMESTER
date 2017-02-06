#include<iostream>
using namespace std;
class stack
{
	private:
		int data[5];
		int top = -1;
	public:
		void push(int x)
		{
			if(top==4)
			{
				cout<<"stack overflow"<<endl;
			}
			else
			{
				top = top + 1;
				cin>>data[top]=x ;
			}
		}
		void pop()
		{
			if (top == -1)
			{
				cout<<"stack underflow"<<endl;
			}
			else
			{
				cout<<data[top]<<endl;
			}
		}
		void display()
		{
			for (i = 0;i<4;i++)
			{
				cout<<data[i];
			}
		}
};

int main()
{
	stack s1,s2;
	s1.push(5);
	s2.push(10);
	s1.push(6);
	s1.push(8);
	s1.pop();
	s1.display();
	s2.display();
}
