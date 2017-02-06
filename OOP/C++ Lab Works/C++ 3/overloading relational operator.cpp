/*C++ PROGRAM TO DEMONSTRATE TO OVERLOAD THE RELATIONAL OPERATOR < */

/*NAME: SAGAR GIRI, ROLL: 205 , SEC: A*/
#include <iostream>
using namespace std;
class Distance
{
	private:
		int feet; float inches;
	public:
		Distance()
		{ feet = 0; inches = 0.0;}
		Distance(int ft, float in)
		{
			feet = ft;
			inches = in;
		}
		bool operator < (Distance dd2)
		{
			float totald1 = feet + inches/12.0;
			float totald2 = dd2.feet + dd2.inches/12.0;
			if(totald1 < totald2)
				return (true);
			else
				return (false);
		}
};
int main()
{
	Distance d1(9,6.3),d2(6,9.4);
	if(d1 < d2)
	{
		cout<<"Distance One is less than distance two";
	}
	else
	{
		cout<<"Distance 1 is greater than or equal to"
				" Distance two";
	}
return 0;
}
