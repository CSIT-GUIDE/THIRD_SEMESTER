/* THIS PROGRAM ILLUSTRATES THE CONCEPT OF 
 * PASSING ARGUMENTS BY REFERENCE IN A FUNCTION */
 
 /* NAME : SAGAR GIRI, ROLL : 205, SECTION : A*/
 
#include <iostream>
using namespace std;
class exchange
{
	private:
		int a;
		int b;
	public:
		exchange(int x, int y)
		{
			a = x;
			b = y;
		}
		void exch(exchange& c1)
		{
			int temp=0;
			temp = c1.a;
			c1.a = c1.b;
			c1.b = temp;
		}
		void display1()
		{
			 cout<<"before exchange"<<endl;
			 cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
		}
		void display2()
		{
			cout<<"after exchange"<<endl;
			cout<<"a = "<<a<<endl<<"b = "<<b;
		}
}; //end class exchange

int main()
 {
	 exchange c1(3,4);
	 c1.display1();
	 c1.exch(c1);
	 c1.display2();
return 0;	
}
