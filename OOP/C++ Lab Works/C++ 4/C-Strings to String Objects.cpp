/*program to illustrare the conversion between c strings and string objects
page 348*/

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		enum{SZ = 80};		//size of all String objects
    	char str[SZ];		//holds a C-string
	public:
	  String()				//default constructor
	  {	str[0]=' '; }
	  
	  String(char s[]) 		//one argument constructor
	  {	strcpy(str,s); }	//convert C-string to String
	  
	  void display()
	  {	cout<<str; }
	  
	  operator char *()		//conversion operator
	  {
	  	return str;			//convert String to C-string
	  }
};

int main()
{
	String S1;				//use no-arg constructor
	char xstr[]="Hello\n";	//create and initialize C-string
	S1 = xstr;				//use 1-arg constructor to convert C-string to String
	S1.display();
	
	String S2("I love OOP.");	//uses 1-arg constructor to initialize string
	cout<<static_cast<char *>(S2);	//use conversion operator to convert String to C-string
	cout<<endl;
return 0;
}
