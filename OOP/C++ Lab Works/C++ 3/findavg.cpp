#include <iostream>
using namespace std;
float findavg(float);

int main()
	{
	float arg, data = 1;
	while(data != 0)
	{
		cout << "Enter data : ";
		cin >> data;
		cout << endl;
		arg = findavg(data);
		cout << "New average = " << arg;
		cout << endl;
	}
}
float findavg(float d)
{
	static int count = 0;
	static float total = 0.0;
	count ++;
	total = total + d;
	return(total /count);
}
