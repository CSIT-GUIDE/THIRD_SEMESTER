/*C++ PROGRAM TO COMPARE THE TWO STRINGS */

/*NAME: SAGAR GIRI, ROLL: 205 , SEC: A*/
#include <iostream>
#include <string.h>
using namespace std;
class String
{
	private:
		enum{sz = 80};
		char str[sz];
	public :
		String()	//default constructor
		{
			strcpy(str, " ");
		}
		String(char s[])//one argument constructor
		{
			strcpy(str, s);
		}
		void display() const //constant display function
		{
			cout << str;
		}
		void getstr()
		{
			//get string from user
			cin.get(str, sz);
		}	
		bool operator == (String ss) const
		{
			//compare the string with the string in the object
			return(strcmp(str,ss.str) == 0) ?true:false;
		}
};
int main()
{
	String s1("yes"),s2("no"),s3 ;
	cout <<endl<<"Enter the \"yes\" or \"no\":";
	s3.getstr();
	if(s3 == s1)  //same as:  s3.operator==(s1)
		cout << "you typed yes\n";
	else if(s3 == s2)	//same as:  s3.operator==(s2)
		cout << "you typed no\n";
	else
		cout << "you didn't follow instruction\n";
return 0;
}	
	
