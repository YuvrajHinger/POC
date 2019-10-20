/*check that a student with same name and address can’t be a regular student as well as an employee.*/
#include<iostream>
#include<conio.h>
using namespace std;
class student;
class employee
{ char id[20];
  char f_name[20],l_name[20];
  int age;
  char address[20];
  public:
  void inp()
  { cout<<"ID: ";
    cin>>id;
    cout<<"F_NAME: ";
    cin>>f_name;
    cout<<"L_NAME: ";
    cin>>l_name;
    cout<<"AGE: ";
    cin>>age;
    cout<<"ADDRESS: ";
    cin>>address;
   }
  void display()
  { cout<<"ID: "<<id<<endl;
    cout<<"F_NAME: "<<f_name<<endl;
    cout<<"L_NAME: "<<l_name<<endl;
    cout<<"AGE: "<<age<<endl;
    cout<<"ADDRESS: "<<address<<endl;
   }
   friend void check(employee *e,student *s);
};
class student
{ char f_name[20];
  char course[20];
  char typ[20];
  char address[20];
  public:
  void inp()
  { cout<<"F_NAME: ";
    cin>>f_name;
    cout<<"COURSE: ";
    cin>>course;
    cout<<"ADDRESS: ";
    cin>>address;
  }
  void display()
  { cout<<"F_NAME: "<<f_name<<endl;
    cout<<"COURSE: "<<course<<endl;
    cout<<"ADDRESS: "<<address<<endl;
  }
  friend void check(employee *e,student *s);
};
int main()
{ employee e[3];
  student s[2];
  cout<<"STUDENT_REGISTRATION"<<endl;
  for(int i=1;i<=2;i++)
  { s[i].inp(); cout<<"____________"<<endl; }
  cout<<"EMPLOYEE_REGISTRATION"<<endl;
  for(int i=1;i<=3;i++)
  { e[i].inp(); cout<<"____________"<<endl; }
  check(e,s); system("CLS");
  cout<<"STUDENT_DISPLAY"<<endl;
  for(int i=1;i<=2;i++)
  { s[i].display(); cout<<"____________"<<endl; }
  cout<<"EMPLOYEE_DISPLAY"<<endl;
  for(int i=1;i<=3;i++)
  { e[i].display(); cout<<"____________"<<endl; }
  getch();
}
void check(employee *e,student *s)
{ for(int i=1;i<=3;i++)
  { for(int j=1;j<=2;j++)
    { if((strcmp(e[i].address,s[j].address)==0) && (strcmp(e[i].f_name,s[j].f_name)==0))
      {  if(strcmp(s[i].course,"PART_TIME")!=0)
         {   cout<<"COURSE ENTRY IS TO BE CHANGE";
             strcpy(s[i].course,"PART_TIME");
         }
      }
    }
   }
}
