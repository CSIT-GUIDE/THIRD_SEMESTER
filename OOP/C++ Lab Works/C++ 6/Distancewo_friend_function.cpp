#include<iostream>

using namespace std;

class Distance  {						//define class Distance
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
		Distance operator+(Distance);	//declare member function operator+
		void display(){
			cout<<feet<<"\'-"<<inches<<"\"";
		}
};

Distance Distance::operator+(Distance dd2){		//define member function ooperator+
							//which returns sum of two Distance objects data members
	int ft=feet+dd2.feet;
	float in=inches+dd2.inches;
	
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
	
	d3=d1+9.3;				//calls d1.operator+(Distance(9.3))
	cout<<"Distance three= "; d3.display();
	/*d4=6.7+d2;									//error */
	cout<<endl<<"Distance four= "; d4.display();	
}
