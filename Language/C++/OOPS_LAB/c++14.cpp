#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
class person 
{	char name[20];
	int age;
	public:
	static 	person *p[10];
	void inp()
	{ cout<<"Name : "; cin>>name;
	  cout<<"Age : ";  cin>>age;
	}
	void display()
	{ cout<<"\nName: "<<name;
	  cout<<"\nAge: "<<age;
	}
};
person *person::p[]={NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
class vvip :public person 
{  char designation[20];
   public:
   void vinp()
   { cout<<"Designation: "; cin>>designation; }
   void vdisplay()
   { cout<<"\nDesignation: "<<designation; }
};
class general:public person 
{	char job[20];
	int wexp;
	public:
	void ginp()
	{ cout<<"Job: "; cin>>job;
	  cout<<"Working_Expirence: ";  cin>>wexp;
	}
	void gdisplay()
	{ cout<<"\nJob: "<<job;
	  cout<<"\nWorking_Expirence: "<<wexp;
	}
};
class official:public person 
{	char department[20];
	char position[20];
	int wyears;
	public:
	void oinp()
	{ cout<<"Department : "; cin>>department;
	  cout<<"Position : ";   cin>>position;
	  cout<<"Working_Years : "; cin>>wyears;
	}
	void odisplay()
	{ cout<<"\nDepartment : "<<department;
	  cout<<"\nPosition : "<<position;
	  cout<<"\nWorking_Years : "<<wyears;
    }
};
int main()
{   vvip *v[3];
    general *g[3];
	official *o[4];
	int n,nv=0,ng=3,no=6,i;
	while(1)
	{   l: system("CLS");
        cout<<"1.INSERT\n2.DISPLAY\n3.Exit"; cin>>n;
		switch(n)
		{case 1:  l1: system("CLS"); 
                  cout<<"1.VVIP\n2.General\n3.Officials\n4.EXIT"; cin>>n;
				  switch(n)
            	  {        case 1:  if(nv<3)
            				        {  v[nv]=new vvip;
            					       person::p[nv]=v[nv];
            					       person::p[nv]->inp();
            					       v[nv]->vinp();
            					       nv++;
            				        }
            				        else
            				        { cout<<"\nNot available !!!"; }
            				        getch();
                                    goto l1;
            			   case 2:  if(ng<6)
            				        { g[ng-3]=new general;
            					      person::p[ng]=g[ng-3];
            					      person::p[ng]->inp();
            					      g[ng-3]->ginp();
            					      ng++;
            				        }
            				        else
            				        { cout<<"\nNot available !!!"; }
            				        getch();
                                    goto l1;                   
            			   case 3:  if(no<10)
            				        { o[no-6]=new official;
            					      person::p[no]=o[no-6];
            					      person::p[no]->inp();
            					      o[no-6]->oinp();
            					      no++;
            				        }
            				        else
            				        { cout<<"\nNot available !!!"; }
            				        getch();
                                    goto l1;
                           case 4:  goto l;
                          default:  cout<<"\nWrong Choice !!!";
				 }break;                            			
		  case 2: l2: system("CLS"); 
                  cout<<"1.VVIP\n2.General\n3.Officials\n4.EXIT"; cin>>n;
				  switch(n)
				  { case 1:  if(nv!=0)
				             { for(i=0;i<nv;i++)
						       { cout<<"\nPerson "<<i+1;
							     person::p[i]->display();
							     v[i]->vdisplay();
							    }
					         }
					         else
					         { cout<<"Not available !!!"; }
					         getch();
                             goto l2;
			        case 2:	 if(ng!=3)
					         { for(i=3;i<ng;i++)
						       { cout<<"\nPerson "<<i-2;
							     person::p[i]->display();
							     g[i-3]->gdisplay();						
						       }
					         }
					         else
					         { cout<<"Not available !!!"; }
					         getch();
                             goto l2;
				    case 3:  if(no!=6)
					         { for(i=6;i<no;i++)
						       { cout<<"\nPerson "<<i-5;
							     person::p[i]->display();
							     o[i-6]->odisplay();			
						       }
					         }
					         else
					         { cout<<"Not available !!!"; }
					         getch();
                             goto l2;
                    case 4:  goto l;
				    default: cout<<"Wrong Choice !!!";
                   }break;
			case 3:  exit(0);
			default: cout<<"Wrong Choice !!!";
		}
		getch();
	}
}
