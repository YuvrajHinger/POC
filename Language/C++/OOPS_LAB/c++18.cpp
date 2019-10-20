/*Create a class telephone_directory (name, occupation, phone, address) and an virtual function 
search (), that searches the object contents in a linear fashion. Extend the class in a specific class 
called doctor (qualification, clinic, visiting time) and override the virtual function such that it 
searches using binary search. Also create another class lawyer (qualification, civil/criminal, cases 
attended, contact_no, office_address) that extends the telephone_directory such that it wont override 
the virtual function. Search for a doctor and a lawyer by taking the option from the user.*/
#include<iostream>
#include<conio.h>
using namespace std;
class telephone_directory //class telephone_directory (name, occupation, phone, address) 
{ public:
  char name[20],occupation[20],phone[11],address[20];
  static int x;  static int y;
  telephone_directory()
  { cout<<"NAME: "; cin>>name;
    cout<<"OCCUPATION: "; cin>>occupation;
    cout<<"PHONE_NO: "; cin>>phone;
    cout<<"ADDRESS: "; cin>>address;
  }
  virtual void search()
  { cout<<"NOT_FOUND!!"; }
};
//Extend the class in a specific class doctor (qualification, clinic, visiting time)
class doctor:public telephone_directory 
{ char qualification[20],clinic[20],visiting_time[10];
  public:
  doctor()
  { cout<<"qualification: "; cin>>qualification;
    cout<<"clinic: ";        cin>>clinic;
    cout<<"visiting_time: "; cin>>visiting_time; 
  }
  void search(); //override the virtual function such that it searches using binary search. 
}*d[10];
//class lawyer (qualification, civil/criminal, casesattended, contact_no, office_address) 
class lawyer:public telephone_directory 
{ char qualification[20],contact_no[20],office_address[20];
  char type[20]; //civil/criminal
  int  no; //casesattended
  public: 
  lawyer()
  {  cout<<"qualification: "; cin>>qualification;
     cout<<"TYPE:civil/criminal: "; cin>>type; 
     cout<<"cases_attended: "; cin>>no; 
     cout<<"contact_no: "; cin>>contact_no;
     cout<<"office_address: ";  cin>>office_address;
  }
  void search();
}*l[10];
int telephone_directory::x;
int telephone_directory::y;
int main()
{  int ch,i;
   while(1)
   { cout<<"1.INSERT\n2.SEARCH\n3.EXIT";  cin>>ch;
     switch(ch)
     { case 1: system("CLS"); cout<<"1.DOCTOR_insert\n2.LAWYER_insert";  cin>>ch;
                switch(ch)
                { case 1: d[++telephone_directory::x]=new doctor();  break;
                  case 2: l[++telephone_directory::y]=new lawyer();    break;
                }break;
       case 2: system("CLS"); cout<<"1.DOCTOR_search\n2.LAWYER_search";  cin>>ch;
                switch(ch)
                { case 1: for(i=1;i<=telephone_directory::x;i++)
                          { cout<<i<<"\n\n";  d[i]->search();  cout<<"________\n"; }break;
                  case 2: for(i=1;i<=telephone_directory::y;i++)
                          { cout<<i<<"\n\n"; l[i]->search();  cout<<"________"; }break;
                }break;
        case 3: exit(0);
     }getch();
   }return 0;
}
void doctor::search()
{ cout<<"NAME: "<<name<<endl;
  cout<<"OCCUPATION: "<<occupation<<endl;
  cout<<"PHONE_NO: "<<phone<<endl;
  cout<<"ADDRESS: "<<address<<endl;
  cout<<"qualification: "<<qualification<<endl;
  cout<<"clinic: "<<clinic<<endl;
  cout<<"visiting_time: "<<visiting_time<<endl; 
}
void lawyer::search()
{  cout<<"NAME: "<<name<<endl;
   cout<<"OCCUPATION: "<<occupation<<endl;
   cout<<"PHONE_NO: "<<phone<<endl;
   cout<<"ADDRESS: "<<address<<endl;
   cout<<"qualification: "<<qualification<<endl;
   cout<<"TYPE:civil/criminal: "<<type<<endl; 
   cout<<"cases_attended: "<<no<<endl; 
   cout<<"contact_no: "<<contact_no<<endl;
   cout<<"office_address: "<<office_address<<endl;
}
