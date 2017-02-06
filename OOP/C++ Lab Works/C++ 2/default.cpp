#include <iostream>
using namespace std;
void repchar(char = '#', int = 30);
int main()
{	
	repchar();
	repchar('$');
	repchar('*', 20);
}

void repchar(char ch, int n)
{	
	cout << endl;
	for(int i = 0; i < n; i++)
	{		
		cout << ch;
	}
}
