#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance()
		{ feet = 0; inches= 0.0; }
		Distance (int ft, float in)
		{
			feet = ft;
			inches = in;
		}
		void display()
		{
			cout<<feet<<"\'-"<<inches<<"\"";
		}
		friend void operator>>(istream & input, Distance & dd1);
		friend void operator<<(ostream & output, Distance & dd1);
};
void operator>>(istream & input, Distance & dd1)
{
	cout<<"Enter feet and inches:"<<endl;
	input>>dd1.feet>>dd1.inches;
}
void operator<<(ostream & output, Distance & dd1)
{
	cout<<"Feet and inches are:"<<endl;
	output<<dd1.feet<<"\'-"<<dd1.inches<<"\"";
}
int main()
{
	Distance d1;
	cin>>d1;
	cout<<d1;
return 0;
}
	
