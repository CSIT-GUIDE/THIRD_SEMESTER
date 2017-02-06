#include<iostream>

using namespace std;
const int MAX = 3;
		
class Xstack{
	private:
		int s[MAX];
		int top;
	public:
		class Full{	};
		class Empty{ };
		Xstack(){
			top=-1;
		}
		void push(int var){
			if(top>=MAX-1){
				throw Full();
			}
			s[top++]=var;
		}
		int pop(){
			if(top<0){
				throw Empty();
			}
			return s[--top];
		}
};

int main(){
	Xstack ss;
	try{
		ss.push(1);
		ss.push(3);
		ss.push(9);
		/*ss.push(7);*/
		cout<<"1: "<<ss.pop()<<endl;
		cout<<"2: "<<ss.pop()<<endl;
		cout<<"3: "<<ss.pop()<<endl;
		cout<<"4: "<<ss.pop()<<endl;
	}
	catch(Xstack::Full){
		cout<<"Error!Stack overflow."<<endl;
	}
	catch(Xstack::Empty){
		cout<<"Error!Stack underflow."<<endl;
	}
}
