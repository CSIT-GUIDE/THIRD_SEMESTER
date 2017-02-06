//unary operator
//implementation of returning nameless object
#include<iostream>
using namespace std;

class Counter{
	
	private:
		
		int count;
		
	public:
			Counter()
			{
				count =0;
			}
			
			Counter(int c)
			{
				count = c;
			}
			
			int getcount()
			{
				return count;
				
			}
			
			Counter operator ++()
			{
				return Counter(count);
			}
			
};

int main()
{
	Counter C1, C2;
	
	cout << "Count one = " <<C1.getcount() << endl;
	cout << "Count two = " <<C2.getcount() << endl;
	
	++C1;
	++C1;
	C2 = ++C1;
	
	cout << "Count one =" << C1.getcount() << endl;
	cout << "Count two =" << C2.getcount() << endl;
		
}
