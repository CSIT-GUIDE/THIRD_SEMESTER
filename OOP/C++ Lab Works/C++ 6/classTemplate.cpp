#include<iostream>
using namespace std;

template<class Type>

class Tstack{
	private:
		enum{MAX=3};
		Type s[MAX];
		int top;
		
	public:
		class Full{	};
		class Empty{ };
		Tstack(){
			top=-1;
		}
		void push(Type var){
			if(top>=MAX-1){
				throw Full();
			}
			s[++top]=var;
		}
		Type pop(){
			if(top<0){
				throw Empty();
			}
			return s[top--];
		}
};


int main(){
	Tstack<int> s1;
	Tstack<char> s2;
	
	try{
	s1.push(1);
	s1.push(3);
	s1.push(9);
	s2.push('a');
	s2.push('s');
	
	cout<<"First stack: "<<endl;
	cout<<"1: "<<s1.pop()<<endl;
	cout<<"2: "<<s1.pop()<<endl;
	cout<<"3: "<<s1.pop()<<endl;
	cout<<"Second stack: "<<endl;
	cout<<"1: "<<s2.pop()<<endl;
	cout<<"2: "<<s2.pop()<<endl;
	}
	
	catch(Tstack<int>::Full){
		cout<<"Error! Stack overflow.";
	}
	catch(Tstack<int>::Empty){
		cout<<"Error! Stack underflow.";
	}
}
