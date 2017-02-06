#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float pi = 3.142857142;
	cout<<setprecision(5)<<pi<<endl;
	cout<<setprecision(9)<<pi<<endl;
	cout<<setprecision(5)<<fixed<<pi<<endl;
	cout<<setprecision(9)<<fixed<<pi<<endl;
	cout<<setprecision(3)<<pi<<endl;
	cout<<setprecision(2)<<pi<<endl;
}
