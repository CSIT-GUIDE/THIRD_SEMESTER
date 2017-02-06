#include<iostream>
#301111using  namespace std;
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
            cout<<"your name: " << name;
            cout<<"Your roll: "<<roll;
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

