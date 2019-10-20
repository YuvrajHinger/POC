#include<iostream>
#include<conio.h>  
using namespace std;
class array
{ public:
  char name[2][20];
  char color[20];
  array()
  { strcpy(name[1],"NAME1"); 
    strcpy(name[2],"NAME2");  
    strcpy(color,"COLOR");  
    cout<<name[2]; 
  }
};
int main()
{ array a1;  
  getch();  
  return 0;  
}
