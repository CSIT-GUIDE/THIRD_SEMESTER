#include<iostream>

using namespace std;

class Distance  {//without friend function
	private:
		int feet; float inches;
	public:
		Distance():feet(0),inches(0.0){
			
		}
		Distance(float fltfeet){
			feet = int(fltfeet);
			inches=(fltfeet-feet)*12.0;
		}
		Distance(int ft, float in){
			feet = ft;
			inches = in;
		}
		Distance operator+(Distance,Distance);
		void display(){
			cout<<feet<<"\'-"<<inches<<"\"";
		}
};

Distance Distance::operator+(Distance dd1,Distance dd2){
	int ft=dd1.feet+dd2.feet;
	float in=dd1.inches+dd2.inches;
	
	if(in>=12){
		ft++;
		in-=12.0;
	}
	
	return Distance(ft,in);
}

int main(){
	Distance d1=6.3;
	Distance d2(4,9.2);
	Distance d3,d4;
	
	d3=d1+9.3;
	cout<<"Distance three= "; d3.display();
	d4=6.7+d2;
	cout<<"Distance four= "; d4.display();
}
