/* THIS C++ PROGRAM ILLUSTRATES THE CONCEPT OF AMBUIGUITY ASSOCIATED
 * WITH THE MULTIPATH INHERITANCE */

/* NAME : SAGAR GIRI, ROLL : 205, SECTION : A*/

#include <iostream>
using namespace std;
class Grandfather				//define base class Grandfather
{
	protected:
		char hairColor[10];
	public:
		void getData()
		{
			cout<<"Enter hair color: ";
			cin>>hairColor;
		}
		void showData()
		{
			cout<<"The hair color is: "<<hairColor;
		}
};
/* class Father: public Grandfather{}; */ //Compiler generates error due to ambuiguity

class Father: virtual public Grandfather
{ 			};

/* class Mother: public Grandfather{}; */	//Compiler generates error due to ambuiguity

class Mother: virtual public Grandfather
{			};

class Child: public Father, public Mother //derived class Child from class Father & Mother
{			};

int main()
{
	Child c1;				//Object c1 of class Child
	cout<<"Enter data for child"<<endl;
	c1.getData();			//calls getData() from Grandfather class
	c1.showData();			//calls showData() from Grandfather class
return 0;
}
