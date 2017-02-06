#include <iostream>
using namespace std;
class Number
{
	private:
		int num;
	public:
		Number()
		{	num = 0; }
		Number (int n)
		{ num = n; }
		int find_cube()
		{
			int temp;
			temp = num*num*num;
			return (temp);
		}
		inline void display()
		{
			cout<<num;
		}
};
int main()
{
	int num;
	cout<<"enter num ";cin>>num;
	Number num1(num);
	cout<<"The cube of ";num1.display();cout<<" is: "<<num1.find_cube();
return 0;
}
