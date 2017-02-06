/* Title :- Program to implement User defined to User defined 
 * type conversion using one argument constructor at destination class
 *  */
 
 /*Name: Sagar Giri, Roll No. 205, Section: A*/
 
#include <iostream>
using namespace std;
class Distmeter			//source Class
{
    private :
        int mtr; float cm;
    public :
        Distmeter() 
        { mtr = 0; cm = 0.0; }

        Distmeter(int m, float c)
        {
            mtr = m;
            cm = c;
        }

        void display()
        {
            cout<<mtr<<"meter "<<cm<<"centimeter"<<endl;
        }

        int getmtr()
        {
            return mtr;
        }
        float getcm()
        {
            return cm;
        }
};

class Distfeet  //destination Class
{
    private:
        int feet; float inches;
     public :
        Distfeet()
        { feet = 0; inches = 0.0; }

        Distfeet(Distmeter dd1)
        {
            float totalfeet = (dd1.getmtr() + dd1.getcm()/100)*3.28;
            feet = (int)totalfeet;
            inches = (totalfeet - feet) * 12.0;
        }

        void display()
		{ cout << feet << "\'-" << " " <<inches << "\""<<endl; }
};

int main()
{
    Distmeter d1(5,0.0);
    Distfeet d2 = d1;
    d1.display();
    d2.display();
    return 0;
}
