#include<iostream>

using namespace std;

class alpha{
	private:
		int a;
	public:
		alpha(){
			a=0;
		}
		alpha(int x){
			a=x;
		}
		void displayAddress(){
			cout<<"Address is: "<<this<<endl;
		}
		void display(){
			cout<<"a= "<<a<<endl;
		}
};

int main(){
	alpha a1,a2(5);
	
	cout<<"Details of a1: "<<endl;
	a1.displayAddress();
	a1.display();

	cout<<"Details of a2: "<<endl;
	a2.displayAddress();
	a2.display();
}
