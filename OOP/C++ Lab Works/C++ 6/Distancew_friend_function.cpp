#include<iostream>

using namespace std;

class Distance  {				//define class distance
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
		void display(){
			cout<<feet<<"\'-"<<inches<<"\"";
		}
		friend Distance operator+(Distance,Distance);	//declare friend function operator+
		
};

Distance operator+(Distance dd1,Distance dd2){			//define function operator+
								//which return sum of two Distance Objects data member
	int ft=dd1.feet+dd2.feet;
	float in=dd1.inches+dd2.inches;
	
	if(in>=12){
		ft++;
		in-=12.0;
	}
	return Distance(ft,in);		//returns nameless object having feet=ft and inches=in
}

int main(){
	Distance d1=6.3;							//define object d1 of class Distance
	Distance d2(4,9.2);							//define object d2 of class Distance
	Distance d3,d4;								//define objects d3 and d4 of class Distance
	
	d3=d1+9.3;									//calls operator+(d1,Distance(9.3))
												//and assign the result in d3	
	cout<<"Distance three= "; d3.display();
	
	d4=6.7+d2;									//calls operator+(Distance(6.7),d2)
												//and assign the result in d4
	cout<<endl<<"Distance four= "; d4.display();
}
