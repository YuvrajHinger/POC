#include<iostream>
#include<conio.h>
using namespace std;
void f1();
int main()
{
    f1();
    f1();
    f1();
    getch();
    return 0;
}
/*void f1()
{
    int c=0;
    c++;
    cout<<c;
}*/
void f1()
{
   static int c;
    c++;
    cout<<c;
}
