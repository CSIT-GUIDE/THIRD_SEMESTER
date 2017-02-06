/* THIS IS A SIMPLE C++ PROGRAM ILLUSTRATES THE CONCEPT OF
 * C++ CLASS AND OBJECTS*/
 
 /*NAME : SAGAR GIRI, ROLL NO. 205 , SECTION : A
  * DATE : 21-FEB-2014*/
#include<iostream>
using  namespace std;
class student
{
    private:
        char name[10];
        int roll;
    public:
        void getdata()
        {
            cout<<"enter name: ";
            cin>>name>>roll;
        }
        void display()
        {
            cout<<"\nyour name: " << name;
            cout<<"\nYour roll: "<<roll;
        }
};

int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.display();
    s2.display();
}

