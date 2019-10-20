#include<iostream>
#include<conio.h>
using namespace std;
class carpentry
{ char typ1[20];
  char wd[20];
  char tool[20];
  int y1;
  public:
  carpentry()
  { *typ1=0;
    *wd=0;
    *tool=0;
     y1=0;
  }  
  carpentry(int s)
  { cout<<"TYPE_OF_WOOD: " ;
    cin>>wd;
    cout<<"TYPE_OF_CREATION: ";
    cin>>typ1;
    cout<<"TOOL_USED: ";
    cin>>tool;
    cout<<"YEAR_OF_EXP: ";
    cin>>y1;
  }
};
class masonry
{ char typ2[20];
  int y2;
  public:
  masonry()
  { *typ2=0;
     y2=0;
  }  
  masonry(int s)
  { cout<<"TYPE_OF_CONSTRUCTION: ";
    cin>>typ2;
    cout<<"YEAR_OF_EXP: ";
    cin>>y2;
  }
};
class driving
{ char lic[20];
  char typ3[20];
  int y3;
  public:
  driving()
  { *typ3=0;
    *lic=0;
     y3=0;
  }  
  driving(int s)
  { cout<<"LICENSE_NO: ";
    cin>>lic;
    cout<<"TYPES_OF_VEHICLES: ";
    cin>>typ3;
    cout<<"YEAR_OF_EXP: ";
    cin>>y3;
  } 
};
class employee:public carpentry,public masonry,public driving
{ char id[20];
  int y0;
  char address[20];
  char phone[11];
  int status[4];
  public:
  employee()
  { cout<<"ID: ";
    cin>>id;
    cout<<"YEAR_OF_EXP.:";
    cin>>y0;
    cout<<"ADDRESS: ";
    cin>>address;
    cout<<"PHONE_NO: ";
    cin>>phone;
    cout<<"CARPENTRY_SKILL\n1.YES\n2.NO";
    cin>>status[1];
    if(status[1]==2)
    { carpentry(); }
    else
    { carpentry c(status[1]); }
    cout<<"MASONRY_SKILL\n1.YES\n2.NO";
    cin>>status[2];
    if(status[2]==2)
    { masonry(); }
    else
    { masonry m(status[2]); }
    cout<<"DRIVING_SKILL\n1.YES\n2.NO";
    cin>>status[3];
    if(status[3]==2)
    { driving(); }
    else
    { driving d(status[3]); }
  }
  void display()
  { cout<<"ID: "<<id<<endl;
    cout<<"YEAR_OF_EXP.:"<<y0<<endl;
    cout<<"ADDRESS: "<<address<<endl;
    cout<<"PHONE_NO: "<<phone<<endl;
    cout<<"SKILLS\n";
    if(status[1]==1)
    { cout<<"CARPENTRY_SKILL"<<endl; }
    if(status[2]==1)
    { cout<<"MASONRY_SKILL"<<endl;  }
    if(status[3]==1)
    { cout<<"DRIVING_SKILL"<<endl; }
    if(status[1]!=1 && status[2]!=1 && status[3]!=1)
    { cout<<"SKILLS 000"<<endl;  }
    cout<<"______________"<<endl;
  }
}*e[3];
int main()
{ int i=0,ch;
  while(1)
  { system("CLS");
    cout<<"1.EMPLOYEE_REG.\n2.DISPLAY\n3.EXIT";
    cin>>ch;
    switch(ch)
    { case 1: i++;
              e[i]=new employee();
              break;
      case 2: for(int x=1;x<=i;x++)
              { e[x]->display(); }
              break;
      case 3: exit(0);
      default: cout<<"INVALID_ENTRY!!";
    }getch();
   }
}
