/*Write a program to find square of given integer using inline function.*/
#include <iostream>
using namespace std;
class square
{
	private:
		int x;
	public:
		inline int make_square(int s)
		{
			int sqr = 0;
			x = s;
			sqr = x*x;
			return (sqr);
		}
};
int main()
{
	int data;
	square s1;
	cout<<"Enter number"<<endl;
	cin>>data;
	cout<<"Square : "<<s1.make_square(data);
return 0;
}	
