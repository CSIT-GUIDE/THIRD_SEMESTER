/* Write a program to convert centigrade into Fahrenheit temperature.*/
#include <iostream>
using namespace std;
class temperature
{
	private:
		float centi;
		float farh;
	public:
		temperature(float c)
		{
			centi = c;
		}
		float convert_to_farh()
		{
			farh = (centi*(9/5))+32;
			return (farh);
		}
};
int main()
{
	float centigrade;
	cout<<"enter data in centigrade:";cin>>centigrade;
	temperature o1(centigrade);
	cout<<"the Fahrenheit is :"<<o1.convert_to_farh();
return 0;
}
