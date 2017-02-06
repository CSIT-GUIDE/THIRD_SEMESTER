/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF HIERARCHIAL INHERITANCE */

/* NAME : SAGAR GIRI, ROLL : 205, SECTION : A */ 

#include <iostream>
using namespace std;
enum{MAX = 10};
class Employee			//define base class employee
{
	private:
		char name[MAX];
		int ID;
	public:
		void getData()
		{
			cout<<endl<<"Enter name and ID: ";
			cin>>name>>ID;
		}
		void showData()
		{
			cout<<endl<<"Name = "<<name<<", ID = "<<ID;
		}
};
//derived class Coordinator from employee class
class Cordinator: private Employee		
{
	private:
		char faculty[MAX];
	public:
		void getData()
		{
			Employee::getData();
			cout<<"Enter Faculty: ";
			cin>>faculty;
		}
		void showData()
		{
			Employee::showData();
			cout<<", Faculty = "<<faculty;
		}
};
//derive Lecturer class from Employee class
class Lecturer : private Employee		
{
	private:
		char subject[MAX];
	public:
		void getData()
		{
			Employee::getData();
			cout<<"Enter Subject : ";
			cin>>subject;
		}
		void showData()
		{
			Employee::showData();
			cout<<", Subject = "<<subject;
		}
};

int main()
{
	Cordinator c1;		//object c1 of Coordinator class
	Lecturer l1,l2;		//Object l1,l2 of Lecturer class
	cout<<"Enter detials for Coordinator: ";c1.getData();
	cout<<endl<<"Enter detials for Lecturer : ";
	l1.getData();
	l2.getData();
	
	cout<<"Detials for Coordinator:: ";
	c1.showData();
	cout<<"\nDetials for Lecturer :: \n";
	l1.showData();
	l2.showData();
return 0;
}
