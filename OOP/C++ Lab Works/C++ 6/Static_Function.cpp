#include<iostream>

using namespace std;

class gamma{					//define class gamma
	private:
		static int total;		//static local variable
		int id;
	public:
		gamma(){
			total++;
			id=total;
		}
		~gamma(){				//define destructor gamma
			total--;
			cout<<"Destroying Id number"<<id<<endl;
		}
		static void showTotal(){	//static function	
			cout<<"Total is: "<<total<<endl;
		}
		void showId(){				//memeber function (non static function)
			cout<<"Id number is: "<<id<<endl;
		}
};	

int gamma::total=0;				//definition of total

int main(){
	gamma g1;					//define object g1 of gamma class
	
	gamma::showTotal();			//calls static function showTotal()
	
	gamma g2,g3;				//define objects g2,g3 of gamma class
	
	gamma::showTotal();			
	
	g1.showId();				//calls member function showId()
	g2.showId();
	g3.showId();
	
	cout<<"................End Of Program................\n";
	return 0;
}
