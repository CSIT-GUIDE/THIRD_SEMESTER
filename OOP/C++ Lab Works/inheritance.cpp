#include <iostream>
using namespace std;
class Counter
{
	protected:
		unsigned int count;
	public:
		Counter()
		{ count = 0; }
		Counter(int c)
		{ count = c; }
		Counter operator++()
		{
			return Counter(++count);
		}
		int getcount()
		{
			return count;
		}
};
class CountDn: public Counter
{
	public:
		CountDn(int c)
		{
			count = c;
		}
		Counter operator--()
		{
			return Counter(--count);
		}
};
int main()
{
	CountDn c1(5),c2;
	++c1;++c1;++c1;
	++c2;
	cout<<"count1 = "<<c1.getcount();
	cout<<"count2 = "<<c2.getcount();
	--c1;--c2;
	cout<<"count1 = "<<c1.getcount();
	cout<<"count2 = "<<c2.getcount();
return 0;
}
