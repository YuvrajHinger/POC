#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
class student
{ t *p[10];
  int i;
  public:    
  student()
  { i=0; }
  void insert(char *a)
  {	p[i]=new char[20];
	strcpy(p[i],a);
	i++;
	cout<<"Successfully Inserted !!!";
  }
  void del(char *a)
  { if(i==0)
	{ cout<<"Empty"; }
	else
	{ int f=0,j;
	  for(j=0;j<i;j++)
	  { if(strcmp(p[j],a)==0)
		{ f=1; break; }
	  }
	  for(int k=j;k<i;k++)    //deletion element by overwrite
	  { p[k]=p[k+1]; }
	  if(f==0)
	  { cout<<"Not Found !!!"; }
	  else
	  { i--;
		cout<<"Successfully Deleted !!!";
	  }
     }
   }
  void update(char *a)
  { int f=0,j;
	if(i==0)
	{ cout<<"Empty List !!!"; }
	else
	{ for(j=0;j<i;j++)                
	  { if(strcmp(p[j],a)==0)         
		{ f=1; break; }
	  }
	  if(f==0)
	  { cout<<"Not Found !!!"; }
	  else
	  { char a[20];
		cout<<"New Value : "; cin>>a;
		strcpy(p[j],a);
		cout<<"Successfully Updated !!!";
	   }
      }
	}
  void display(char *a)
  { int j;
	if(i==0)
	{ cout<<"Empty"; }
	else
	{ for(j=0;j<i;j++)
	  { cout<<j+1<<"."<<p[j];
		cout<<"\n------------------------------\n";
	  }
	}
  }
};            
int main()    
{ student <char> s;
  char n[20];
  int ch,i=0; 
  while(1)    
  { system("CLS");
    cout<<"1.INSERT\n2.DELETE\n3.UPDATE\n4.DISPLAY\n5.EXIT"; cin>>ch;  
    switch(ch)
    { case 1: 	cout<<"NAME: "; cin>>n;
			    s.insert(n);
				break;
      case 2:   cout<<"NAME: "; cin>>n;
				s.del(n);
				break;
      case 3:   cout<<"NAME: ";  cin>>n;
				s.update(n);
				break;				
      case 4:   s.display(n);
				break;
      case 5:   exit(0);
    }getch(); 
   }          
}
