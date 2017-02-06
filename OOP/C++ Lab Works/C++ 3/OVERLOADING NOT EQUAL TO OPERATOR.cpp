/*C++ PROGRAM TO DEMONSTRATE TO OVERLOAD THE RELATIONAL OPERATOR != */

/*NAME: SAGAR GIRI, ROLL: 205 , SEC: A*/

#include <iostream>
using namespace std;
class Distance
{
	private:
		float feet;
	public:
		Distance()
		{ feet = 0.0; }
		Distance(float ft)
		{
			feet = ft;
		}
		bool operator != (Distance dd2)
		{
			float ddd1 = feet;
			float ddd2 = dd2.feet;
			if(ddd1 != ddd2)
				return (true);
			else
				return (false);
		}
};

int main()
{
	Distance d1(5.4), d2(5.4);
	if(d1.operator != (d2))
		cout<<"Not equal"<<endl;
	else
		cout<<"Both Equal"<<endl;
return 0;
}
