#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
    char name[20];
    int age;
};
void sort(struct student *);
void search(struct student *);
void display(struct student *);
int main()
{
    struct student s[3];
    cout<<"register detail \n";
    for(int i=0;i<3;i++)
    {
     cout<<"\n name \t";
     cin>>s[i].name;
     cout<<"age \t";
     cin>>s[i].age;
    }
    sort(s); 
    search(s);
    display(s);
    getch();
    return 0;
}
void sort(struct student *s)
{
    student t;
    for(int i=0;i<3;i++)
    {
      for(int j=i+1;j<3;j++)
      {
        if(strcmp(s[i].name,s[j].name)>0)      
        {
          t=s[i];
          s[i]=s[j];
          s[j]=t;
        }
      }
    }
}
void search(struct student *s)
{
    char n[20];
    int i,f=0;
a:  cout<<"\n enter name to be search \t";
    cin>>n;
    for(i=0;i<3;i++)
    {
      if(strcmp(s[i].name,n)==0)
      {
        f=1;
        break;
      }      
    }
    if(f==1)
    {
        cout<<"name found \n"<<s[i].name<<"\t"<<s[i].age;
    }    
    else
    {
        cout<<"\n name does not exist \n";  
        cout<<"1: enter name again \n 2: exit \n";
        int ch;
        cin>>ch;
        if(ch==1)
        {
            goto a;
        }
    }           
}
void display(struct student *s)
{
    cout<<"\n register detail \n";
    for(int i=0;i<3;i++)
    {
     cout<<"\n"<<s[i].name<<"\t"<<s[i].age;
    }
}
