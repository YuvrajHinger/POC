#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
void disp(t &a,t &b)
{ cout<<a<<b; 
  t temp; temp=a; a=b; b=temp;
  cout<<"\n"<<a<<b; 
} 
int main()
{ int a=2,b=9;
  disp(a,b);
  getch();
}
/*template<class t>
void disp(t *a,int n)
{ for(int i=0;i<n;i++)
  { cout<<a[i]; }
}
template<class t>
void sort(t *a,int n)
{ t temp;
  for(int i=0;i<n;i++)
  { for(int j=i+1;j<n;j++)
    { if(a[i]>a[j])
      { temp=a[i]; a[i]=a[j]; a[j]=temp; }
    }
  }
}
int main()
{ int a[]={9,8,7,6,5,4,3,2,1};
  disp(a,9); cout<<"\n\n\n";
  sort(a,9);
  disp(a,9);
  getch();
}*/
/*class shape
{ public:
  virtual void area()=0;
 // { cout<<"no_area"; }
};
class triangle:public shape
{ int b,h,ar;
  public:
  void area()
  { cin>>b>>h; ar=0.5*b*h; cout<<ar; }
};
class rectangle:public shape
{ int l,b,ar;
  public:
  void area()
  { cin>>l>>b; ar=l*b; cout<<ar; }
};
class square:public shape
{ 
};
int main()
{ triangle t;
  rectangle r;
  square s;
  t.area();
  getch();
  return 0;
}
*/
