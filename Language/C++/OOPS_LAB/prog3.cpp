#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{ int bin,dec=0,bit,base=0;
  cout<<"ENTER BINARY NO: "; cin>>bin; //100 // 111
  while(bin) 
  { bit=bin%10; //0 0 1  // 1 1 1
    if(bit==0 || bit==1) 
    { dec=dec+bit*pow(2,base); base++; } // 0,1  dec,base  0,2  4,3  // 1,1  3,2  7,3
    else
    { cout<<"not"; exit(0); }
    bin=bin/10; // 10 1 0 // 11 1 0
  }
  cout<<dec<<endl; 
  getch();
}
