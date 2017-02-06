#include<iostream>

using namespace std;

template<class T>

T abs(T a){
	if(a<0)
		return -a;
	else
		return a;
}

int main(){
	int a,b;
	float x,y;
	
	cout<<"Enter two integer: ";
	cin>>a>>b;
	
	cout<<"Enter two float value: ";
	cin>>x>>y;
	
	cout<<"|a| = "<<abs(a)<<" and |b| = "<<abs(b)<<endl;
	cout<<"|x| = "<<abs(x)<<" and |y| = "<<abs(y)<<endl;
}
