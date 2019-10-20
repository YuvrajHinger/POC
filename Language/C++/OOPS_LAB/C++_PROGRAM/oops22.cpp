#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
class stack
{ private:
  t s[];
  int top;
  public:
  stack()
  { top=-1; }
  void push(t e);
};
template<class t>
void stack<t>::push(t e)
{ top++;  // top 0
  s[top]=e; // s[0] 3
  cout<<s[top]; // 3
}
int main()
{ stack<int>is;
  is.push(3);
  getch();
  return 0;
}
