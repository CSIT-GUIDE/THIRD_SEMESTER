/* Title :- Program to implement Basic to User defined datatype
   Name :- Sanjeev Budha
   Roll No. :- 0220
   */

#include <iostream>

using namespace std;

class Distance{
    private :
        int feet; float inches;

    public :

        Distance(){
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

/* output:
    Distance 17'-4.60801

*/
