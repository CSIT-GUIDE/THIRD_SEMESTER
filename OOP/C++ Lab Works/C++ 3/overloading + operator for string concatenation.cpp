/* C++ PROGRAM TO OVERLOAD + OPERATOR FOR STRING CONCATENATION */

/*NAME: SAGAR GIRI, ROLL: 205 , SEC: A*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class String
{
	private:			//PRIVATE ACCESS SPECIFIER
		char str[20];
	public:				//PUBLIC ACCESS SPECIFIER
		String()		//DEFAULT CONSTRUCTOR
		{
			strcpy(str,"");
		}
		String (char s[]) //ONE ARGUMENT CONSTRUCTOR
		{
			strcpy(str,s); //COPIES S[] TO STR[]
		}
		void display()	//DISPLAY
		{
			cout<<str;
		}
		String operator+(String); //OVERLOADING OPERATOR + 
};
String String::operator +(String ss2) //OPERATOR+ FUNCTION DEFINITION
{
	if(strlen(str)+strlen(ss2.str)>=20) //IF MERGED ARRAY EXCEED THE LIMIT
		exit(1);						//EXIT THE PROGARM
		
	String temp;
	strcpy(temp.str,str);
	strcat(temp.str,ss2.str);
	return temp;
}
int main()
{
	String s1("Happy"),s2("Dashain"),s3;
	s3 = s1 +" "+ s2;			//CALL FOR THE OPERATOR+ FUNCTION CALL
	cout<<"String after concatenation = "<<endl;
	s3.display();
return 0;
}
