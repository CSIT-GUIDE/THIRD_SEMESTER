/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF AMBUIGITY 
 * ASSOCIATED WITH THE MULTIPLE INHERITANCE */
 
/* NAME : SAGAR GIRI, ROLL : 205, SECTION : A */

#include <iostream>
using namespace std;
class Employee				//define base class Employee
{
	protected:
		char name[20];
	public:
		void getName()
		{
			cout<<endl<<"Enter Name: ";
			cin>>name;
		}
		void showData()
		{
			cout<<endl<<"Name: "<<name;
		}
};
class Training				//define base class Training
{
	protected:
		char type[20];
	public:
		void getData()
		{
			cout<<"Enter Training type: ";
			cin>>type;
		}
		void showData()
		{
			cout<<endl<<"Training Completed: "<<type;
		}
};
//derived class Manager from base class Employee and Training
class Manager: public Employee, public Training
{
	public:
		void getData()
		{
			Employee::getName();
			Training::getData();
		}
};

int main()
{
	Manager m1;				//define object m1 of Manager class
	cout<<"Enter Data for Manager: ";
	m1.getData();
	
	cout<<endl<<"Detials of Manager: ";
	/* m1.showData(); */	//compiler generates error due to ambiguity
	
	m1.Employee::showData();	//call showData() methof from Employee
	m1.Training::showData();	//call showData() methof from Training
return 0;
}
