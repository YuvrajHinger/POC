#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
        char name[20];
        char roll[11];
        int m[3];
};
void  pass_or_fail(student *);
int main()
{
    student s[3];
    cout<<"register detail \n";
    for(int i=0;i<3;i++)
    {
      cout<<"\n name \t";  
      cin>>s[i].name;
      cout<<"roll no \t";  
      cin>>s[i].roll;
    } 
    cout<<"marks \n";    
    for(int i=0;i<3;i++)
    {
      cout<<"\n"<<s[i].name<<" \n";  
      for(int j=0;j<3;j++)  
      {
       cin>>s[i].m[j];      
      }
    }
    pass_or_fail(s);
    getch();
    return 0;
}
 void  pass_or_fail(student *s)
 {  int f;
    for(int i=0;i<3;i++)
    {
      f=0;  
      for(int j=0;j<3;j++)
      {
        if(s[i].m[j]>40)
        {
         f++;
        }
      }
      if(f==3)
      {
       cout<<"\n"<<s[i].name<<"pass \n";
      }
      else
      {
       cout<<"\n"<<s[i].name<<"fail \n";              
      }
    }       
}                     
                         
        
        
        
        
        
        
        
        
        
        
