#include<iostream>
using namespace std;
class demo{
	int x=10,y=10;	
	public:		
	void operator++(){ x++; y++; }
	int operator+(){ return x+y; }
};
int main(){			
	demo d;
	++d;	
	cout<<"SUM = "<<+d;					
	return 0;
}
