#include <iostream>
using namespace std;
class times
{
	private:
		int hrs;
		int mins;
	public:
		void getdata()
		{
			cout<<"Enter Hour and mins: \n ";
			cin>>hrs;
			cin>>mins;
		}
		void setdata(int h,int m)
		{
			hrs = h;
			mins = m;
		}
		void display()
		{
			cout<<"The time is:\n";
			cout<<hrs<<" : "<<mins<<endl;
		}
};

int main()
{
	times t1,t2;
	
	t1.getdata();
	t1.display();
	t2.setdata(4,45);
	t2.display();
}
