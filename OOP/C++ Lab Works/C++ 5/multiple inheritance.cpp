/* THIS C++ PROGRAM ILLUSTRATED THE CONCEPT OF MULTIPLE INHERITANCE */

/* NAME : SAGAR GIRI, ROLL : 205, SECTION : A */ 

#include <iostream>
using namespace std;
class Employee
{
	private:
		char name[20];
		int ID;
	public:
		void getData()
		{
			cout<<endl<<"Enter Name and ID: ";
			cin>>name>>ID;
		}
		void showData()
		{
			cout<<endl<<"Name: "<<name<<endl<<"ID: "<<ID;
		}
};
class Education
{
	private:
		char school[20];
		char degree[20];
	public:
		void getData()
		{
			cout<<"Enter School and degree: ";
			cin>>school>>degree;
		}
		void showData()
		{
			cout<<endl<<"School: "<<school<<" Degree: "<<degree;
		}
};

class Coordinator:private Employee, private Education
{
	private:
			char faculty[20];
		public:
			void getData()
			{
				Employee::getData();
				Education::getData();
				cout<<"Enter Faculty: ";
				cin>>faculty;
			}
			void showData()
			{
				Employee::showData();
				Education::showData();
				cout<<", Faculty = "<<faculty;
			}
};
class Lecturer : private Employee, private Education	
{
		private:
			char subject[20];
		public:
			void getData()
			{
				Employee::getData();
				Education::getData();
				cout<<"Enter Subject : ";
				cin>>subject;
			}
			void showData()
			{
				Employee::showData();
				Education::showData();
				cout<<", Subject = "<<subject;
			}
};
int main()
{
	Coordinator c1;
	Lecturer l1;
	
	cout<<"Enter Data for coordinator: ";
	c1.getData();
	cout<<endl<<endl<<"Enter data for lecturer: ";
	l1.getData();
	
	cout<<endl<<endl<<"Detials for Coordinator: ";
	c1.showData();
	
	cout<<endl<<endl<<"Detials for lecturer: ";
	l1.showData();
return 0;
}
