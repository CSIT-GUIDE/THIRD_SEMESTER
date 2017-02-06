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
		friend istream & operator>>(istream & input, Distance & dd1);
		friend ostream & operator<<(ostream & output, Distance & dd1);
};

istream & operator>>(istream & input, Distance & dd1)
{
	cout<<"Enter feet and inches:"<<endl;
	input>>dd1.feet>>dd1.inches;
	return input;
}

ostream & operator<<(ostream & output, Distance & dd1)
{
	cout<<endl<<"Feet and inches are:"<<endl;
	output<<dd1.feet<<"\'-"<<dd1.inches<<"\"";
	return output;
}

int main()
{
	Distance d1,d2;
	cin>>d1>>d2;
	cout<<d1<<d2;
return 0;
}
