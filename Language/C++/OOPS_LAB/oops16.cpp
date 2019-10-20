#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
template <class x>
class list
{
	x *p[10];
	int i;
	public:
		list()
		{
			i=0;
		}
		void insert(x a)
		{
			p[i]=new int;
			*p[i]=a;
			i++;
			cout<<"Successfully Inserted !!!";
		}
		void insert(char *a)
		{
			p[i]=new char[20];
			strcpy(p[i],a);
			i++;
			cout<<"Successfully Inserted !!!";
		}
		void ddelete(x a)
		{
			if(i==0)
			{
				cout<<"Empty List !!!";
			}
			else
			{
				int f=0,j;
				for(j=0;j<i;j++)
				{
					if(*p[j]==a)
					{
						f=1;
						break;
					}
				}
				for(int k=j;k<i;k++)
				{ 
					p[k]=p[k+1];
				}
				if(f==0)
				{
					cout<<"Not Found !!!";
				}
				else
				{
					i--;
					cout<<"Successfully Deleted !!!";
				}
			}
		}
		void ddelete(char *a)
		{
			if(i==0)
			{
				cout<<"Empty List !!!";
			}
			else
			{
				int f=0,j;
				for(j=0;j<i;j++)
				{
					if(strcmpi(p[j],a)==0)
					{
						f=1;
						break;
					}
				}
				for(int k=j;k<i;k++)
				{ 
					p[k]=p[k+1];
				}
				if(f==0)
				{
					cout<<"Not Found !!!";
				}
				else
				{
					i--;
					cout<<"Successfully Deleted !!!";
				}
			}
		}
		void update(char *a)
		{
			int f=0,j;
			if(i==0)
			{
				cout<<"Empty List !!!";
			}
			else
			{
				for(j=0;j<i;j++)
				{
					if(strcmpi(p[j],a)==0)
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					cout<<"Not Found !!!";
				}
				else
				{
					char a[20];
					cout<<"New Value : ";
					gets(a);
					strcpy(p[j],a);
					cout<<"Successfully Updated !!!";
				}
			}
		}
		void update(x a)
		{
			int f=0,j;
			if(i==0)
			{
				cout<<"Empty List !!!";
			}
			else
			{
				for(j=0;j<i;j++)
				{
					if(*p[j]==a)
					{
						f=1;
						break;
					}
				}
				if(f==0)
				{
					cout<<"Not Found !!!";
				}
				else
				{
					int d;
					cout<<"New Value : ";
					cin>>d;
					*p[j]=d;
					cout<<"Successfully Updated !!!";
				}
			}
		}
		void display(char *a)
		{
			int j;
			if(i==0)
			{
				cout<<"Empty List !!!";
			}
			else
			{
				cout<<"List :\n";
				for(j=0;j<i;j++)
				{
					cout<<j+1<<"."<<p[j];
					cout<<"\n------------------------------\n";
				}
			}
		}
		void display(x a)
		{
			int j;
			if(i==0)
			{
				cout<<"Empty List !!!";
			}
			else
			{
				cout<<"List :\n";
				for(j=0;j<i;j++)
				{
					cout<<j+1<<"."<<*p[j];
					cout<<"\n-------------------------------\n";
				}
			}
		}
};
int main()
{
	list <int> l1;
	list <char> l2;
	int n1,n2;
	int d1;
	char d2[20];
	while(1)
	{
	l:	system("cls");
		cout<<"1.Number\n2.Name\n3.Exit\nEnter Choice : ";
		cin>>n1;
		switch(n1)
		{
			case 1:
			case 2:
				while(1)
				{
					system("cls");
					cout<<"1.Insert\n2.Delete\n3.Update\n4.Display\n5.Go Back\nEnter Choice : ";
					cin>>n2;
					system("cls");
					switch(n2)
					{
						case 1:
							cout<<"Enter Element : ";
							switch(n1)
							{
								case 1:
									cin>>d1;
									l1.insert(d1);
									break;
								case 2:
									gets(d2);
									gets(d2);
									l2.insert(d2);
									break;
							}
							break;
						case 2:
							cout<<"Element To Delete : ";
							switch(n1)
							{
								case 1:
									cin>>d1;
									l1.ddelete(d1);
									break;
								case 2:
									gets(d2);
									gets(d2);
									l2.ddelete(d2);
									break;
							}
							break;
						case 3:
							cout<<"Element To Update : ";
							switch(n1)
							{
								case 1:
									cin>>d1;
									l1.update(d1);
									break;
								case 2:
									gets(d2);
									gets(d2);
									l2.update(d2);
									break;
							}
							break;
						case 4:
							switch(n1)
							{
								case 1:
									l1.display(d1);
									break;
								case 2:
									l2.display(d2);
									break;
							}
							break;
						case 5:
							goto l;
						default :
							cout<<"Wrong Choice !!!";
					}
					getch();
				}
				break;
			case 3:
				exit(0);
			default :
				cout<<"Wrong Choice !!!";
		}
		getch();
}	}
