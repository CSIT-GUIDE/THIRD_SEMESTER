/*Write a program to convert feet into meter.*/
#include <iostream>
using namespace std;
class convert
{
	private:
		float feet;
		float meter;
	public:
		convert(float ft)
		{
			feet = ft;
		}
		float convert_to_meter()
		{
			meter = feet/3.28;
			return (meter);
		}
};
int main()
{
	float data;
	cout<<"enter data in feet:";cin>>data;
	convert o1(data);
	cout<<"the meter is :"<<o1.convert_to_meter();
return 0;
}
	
