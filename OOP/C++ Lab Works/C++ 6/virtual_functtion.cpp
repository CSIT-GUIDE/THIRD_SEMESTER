#include<iostream>
#include<string.h>

using namespace std;

class Employee{					//deine abstract class Employee
	protected:
		char name[20];
		int id;
		char post[15];
	public:
		void getName(){
			cout<<"Enter name and id: ";
			cin>>name>>id;
		}
		void showName(){
			cout<<endl<<"Name: "<<name<<" ID: "<<id;
		}
		virtual void getData()=0;		//pure virtual function
		virtual void showData()=0;		//pure virtual function
};

class Coordinator: public Employee{	//define class Coordinator derived from Employee
	private:
		char faculty[20];
	public:
		
		void getData(){
			strcpy(post,"Coordinator");
			Employee::getName();
			cout<<endl<<"Enter faculty: ";
			cin>>faculty;
		}
		void showData(){
			Employee::showName();
			cout<<endl<<"Post: "<<post<<" Faculty: "<<faculty;
		}
};

class Lecturer: public Employee{	//define class lecturer derived from Employee
	private:
		char subject[20];
	public:
		void getData(){
			strcpy(post,"Lecturer");
			Employee::getName();
			cout<<endl<<"Enter subject: ";
			cin>>subject;
		}
		void showData(){
			Employee::showName();
			cout<<endl<<"Post: "<<post<<" Subject: "<<subject;
		}
};

int main(){
	Employee* Eptr[100];	//define array of pointers to Employee
	int count=0;
	char choice;
	
	do{
		cout<<"Enter Coordinator or Lecturer (c/l): ";
		cin>>choice;
		
		if(choice=='c'){
			Eptr[count]= new Coordinator;	//put new Coordinator object address in array
			cout<<endl<<"Enter data for Coordinator: "<<endl;
		}
		else{
			Eptr[count]= new Lecturer;		//put new Lecturer object address in array
			cout<<endl<<"Enter data for Lecturer: "<<endl;
		}
		Eptr[count++]->getData();	//may call getData() of Coordinator or Lecturer
									//depending on which object is put in array
		
		cout<<"Do you want to continue? (y/n): ";
		cin>>choice;
	}while(choice!='n');
	
	cout<<endl<<endl<<"The detail information is: ";
	for(int i=0;i<count;i++){
		cout<<endl;
		Eptr[i]->showData();
	}
}
