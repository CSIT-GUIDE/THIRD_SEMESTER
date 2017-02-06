/* THIS PROGRAM ILLUSTRATES THE CONCEPT OF 
 * INLINE FUNCTION */
 
 /* NAME : SAGAR GIRI, ROLL : 205, SECTION : A*/
#include <iostream>
using namespace std;
class Distance 
{
	private:
		int feet;float inches;
	public:
		Distance()
		{
			feet = 0;
			inches = 0.0;
		}
		
		Distance(int ft, float in)
		{
			feet = ft;
			inches = in;
		}
		
		inline Distance addDistance(Distance dd1)
		{
			Distance temp;
			temp.feet = feet + dd1.feet;
			temp.inches = inches + dd1.inches;
			if(inches >= 12.0)
			{	
				inches -= 12.0;
				feet++;
			}
			return temp;
		}
		
		void display()
		{	
			cout<<"total Distance = ";
			cout << feet << "\'-" << inches << "\"" << endl;
		}
};
int main()
{
	Distance d1(5, 6.7), d2(7, 3.2), d3;
	d3 = d1.addDistance(d2);
	d3.display();
}
