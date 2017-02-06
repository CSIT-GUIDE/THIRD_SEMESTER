#include<iostream>

using namespace std;

template<class T,class Q>

T sum(T aa,Q xx){
	Q temp;
	
	temp=aa+xx;
	return(temp);
}

int main(){
	int a; float b;
	
	a=3;
	b=4.9;
	
	cout<<"Sum is: "<<sum(1,5.9);
}
