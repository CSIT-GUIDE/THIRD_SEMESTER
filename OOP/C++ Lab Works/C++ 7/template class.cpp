/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF EXCEPTION HANDLING*/

/* NAME: SAGAR GIRI, ROLL No. 205, SECTION : A*/
#include <iostream>
const int MAX = 3;
using namespace std;
class Stack
{
	private:
		int St[MAX];
		int top;
	public:
		Stack()
		{ top = -1; }
		class full	//CLASS TO THROW STACK FULL EXCEPTION
		{	};
		class empty	//CLASS TO THROW STACK EMPTY EXCEPTION
		{	};
		void push(int var)
		{
			if(top >= MAX-1)
			{
				throw full(); //THROWS FULL OBJECT FOR STACK FULL EXCEPTION
			}
			St[++top] = var;
		}
		int pop()
		{
			if(top < 0)
			{
				throw empty();	//THROWS EMPTY OBJECT FOR STACK EMPTY EXCEPTION
			}
			return (St[top--]);
		}
};
int main()
{	
	Stack s1;
	try{		//TRY BLOCK
		s1.push(1);
		s1.push(2);
		s1.push(3);
		/*s1.push(4); */ //THROWS STACK FULL EXCEPTION
		cout<<"Pop1 = "<<s1.pop()<<endl;
		cout<<"Pop2 = "<<s1.pop()<<endl;
		cout<<"Pop3 = "<<s1.pop()<<endl;
		cout<<"Pop4 = "<<s1.pop()<<endl; //THROWS STACK EMPTY EXCEPTION
		
	}
	catch(Stack::full)		//CATCH BLOCK FOR STACK FULL EXCEPTION
	{
		cout<<"Stack Full"<<endl;
	}
	catch(Stack::empty)	//CATCH BLOCK FOR STACK EMPTY EXCEPTION
	{
		cout<<"Stack Empty"<<endl;
	}
return 0;
}
