/* Title : C++ Program to implement type conversion 
 * between userdefined to userdefined using Operator 
 * function at source class */

/*Name: Sagar Giri, Roll No. 205, Section: A */

#include <iostream>
using namespace std;

class Distfeet
{
    private:
        int feet; float inches;
    public:
        Distfeet()
        { feet = 0; inches = 0.0; }

        Distfeet(int ft, float in)
        {  feet = ft; inches = in; }

        void display()
        {
            cout << feet << "\'-" << inches << "\"";
        }
};

class Distmeter
{
    private:
        int mtr; float cm;
        int ft; float in;
    public:
        Distmeter()
        { mtr = 0; cm = 0.0; }

        Distmeter(int m, float c)
        {
			mtr = m;
            cm = c;
        }

        operator Distfeet() //d1 calls Distfeet function
        {
            float totalfeet = (mtr + cm /100) * 3.28;  //mtr and cm are d1 variables
            int ft = (int)totalfeet;                   //ft takes only digits before deciaml
            float in = (totalfeet - ft) * 12.0; // converts into inches
            return Distfeet(ft,in);
        }

        void display()
        {
            cout<<mtr<<" meter "<<cm<<" centimeter"<<endl;
        }
};


int main()
{
    Distmeter d1(5,0.0);
    Distfeet d2;
    d1.display();

    d2 = d1;
    d2.display();
    return 0;
}
