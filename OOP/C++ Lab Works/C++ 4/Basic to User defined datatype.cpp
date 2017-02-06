/* C++ Program to illustrate the concept of Basic to UserDefined 
 * type-conversion using one argument constructor*/
 
 /*Name :- Sagar Giri, Roll No. :205 , Section: A*/

#include <iostream>
using namespace std;

class Distance
{
    private :
        int feet; float inches;
    public :
        Distance()
        {
            feet = 0; inches = 0.0;
        }

        Distance(float mtr)
        {
            float fltfeet = mtr * 3.28;    //convert meter into feet
            feet = (int)fltfeet;           //takes only stream of digit before decimal
            inches = (fltfeet - feet) * 12.0; // takes stream after decimal and converts them into inches
        }

        void display()
        {
            cout << feet << "\'-" << inches << "\''";
        }

};
int main()
{
    Distance d1 = 5.3; // d1 calls one argument constructor
    cout << "Distance one =";
    d1.display();
return 0;
}

