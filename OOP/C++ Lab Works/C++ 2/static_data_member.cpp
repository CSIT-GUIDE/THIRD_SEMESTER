/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF
 * STATIC DATA MEMBERS (STATIC DATA CLASS) */
 
 /*NAME : SAGAR GIRI, SECTION: A, ROLL NO. 205 */
 
 #include <iostream>
 using namespace std;
 class Distance 
 {
	 private:
		int feet; float inches;
		
	public:
		static int count; //static data member
		Distance()
		{
			feet = 0;inches = 0.0;
			count++; //increments count for every object created
		}
		Distance (int ft, float in)
		{
			feet = ft;inches = in;
			count++; //increments count for every object created
		}
		void display()
		{
			cout<<feet<<"\'-"<<inches<<"\"";
		}
};
int Distance::count = 0; //definition of static variable count
int main()
{
	Distance d1(5,7.6),d2(4,3.9),d3;
	cout<<endl<<"Total Objects="<<Distance::count;
	cout<<endl<<"Distance One =";d1.display();
	cout<<endl<<"Distance Two =";d2.display();
	cout<<endl<<"Distnce Three=";d3.display();
	Distance d4(4,9.2);
	cout<<endl<<"Total Objects ="<<Distance::count;
	cout<<endl<<"Distance four =";d4.display();
}
