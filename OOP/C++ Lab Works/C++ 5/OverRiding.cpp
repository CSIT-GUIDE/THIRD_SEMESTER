/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF 
 * FUNCTION OVERRIDING */
 
/* NAME : SAGAR GIRI, ROLL : 205, SECTION : A */ 

#include <iostream>
#include <stdlib.h>
using namespace std;
class Stack				//base class
{
	protected:
		enum{MAX=5};
		int stack[MAX];
		int top;
	public:
		Stack()
		{ top = -1; }
		void push(int var)		//push value into stack
		{ stack[++top] = var; }
		int pop()				//pop value from stack
		{ return (stack[top--]); }
};
class FullStack: public Stack	//define derived class FullStack from Stack base class
{
	public:
		void push(int var)		//overriding push function
		{
			if(top >= MAX-1)
			{
				cout<<"Stack Overflow"; exit(1);
			}
			Stack::push(var);	//call push() method from base class
		}
		int pop()				//overriding pop function
		{
			if(top < 0)
			{
				cout<<"Stack Underflow";exit(1);
			}
			return(Stack::pop());	//call pop() method from base class
		}
};
int main()
{
	FullStack s1;		//define object s1 of derived class
	s1.push(5);			//call push method of derived class
	s1.push(10);
	s1.push(15);
	s1.push(20);
	s1.push(25);
	//s1.push(30);		//shows stack overflow
	
	cout<<"Poped element is "<<s1.pop()<<endl; //call pop method from derived class
	cout<<"Poped element is "<<s1.pop()<<endl;
	cout<<"Poped element is "<<s1.pop()<<endl;
	cout<<"Poped element is "<<s1.pop()<<endl;
	cout<<"Poped element is "<<s1.pop()<<endl;
	//cout<<"Poped element is "<<s1.pop()<<endl; //shows stack underflow
return 0;
}
