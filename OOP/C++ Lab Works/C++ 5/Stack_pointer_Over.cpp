#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
class Stack
{
	protected:
		enum{MAXR = 3, MAXC = 5};
		char name[MAXR][MAXC];
		int top;
	public:
		Stack()
		{ top = -1; }
		void push(char* var)
		{	strcpy(name[++top],var); }
		char* pop()
		{
			return &name[top--][0];
		}
};
class FullStack: public Stack
{
	public:
		void push(char *var)
		{
			if(top >= MAXR-1)
			{
				cout<<"Stack Overflow"<<endl;
				exit(0);
			}
			Stack::push(var);
		}
		char *pop()
		{
			if(top <= -1)
			{
				cout<<"Stack Underflow"<<endl;exit(0);
			}
			return Stack::pop();
		}
};
int main()
{
	FullStack s1;
	s1.push("Sagar");
	s1.push("Hari");
	s1.push("Ram");
	
	cout<<"poped element is"<<endl<<s1.pop()<<endl;
	
return 0;
}
