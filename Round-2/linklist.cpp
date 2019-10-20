#include<iostream>
using namespace std;
class link_list{
	struct node{
		int x;
		struct node *next;
	}*start=NULL,*t,*temp;	
	public:
	void create(int x){
		t=new node();		
		t->x=x;
		t->next=NULL;
		if(start==NULL){
			start=t;
		}
		else{
			temp=start;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=t;
		}
	}		
	void read(){		
		if(start==NULL){
			cout<<"EMPTY "<<endl;
		}
		else{
			t=start;
			cout<<"Output:";
			while(t!=NULL){
				cout<<"\t"<<t->x;
				t=t->next;
			}
			cout<<endl;
		}
	}		
	void del(int x){
		if(start==NULL){
			cout<<"EMPTY DATA"<<endl;
		}
		else{
			if(start->x==x){
				t=start;
				start=start->next;
			} 
			else{
				t=start;
				while(t!=NULL && t->x!=x){					
					temp=t;
					t=t->next;
				}
				if(t==NULL){
					cout<<"Node Not Found !!"<<endl;
				}
				else{
					cout<<"Node Deleted !!"<<endl;
					temp->next=t->next;
				}
				delete(t);
			}							
		}
	}
};
int main(){
	link_list l;
	int ch,data;
	while(1){
		cout<<"1. Insert \n2. Delete\n3. Read\n4. Exit"<<endl;
		cout<<"ENTER CHOICE:\t";	
		cin>>ch;	
		switch(ch){
			case 1: cout<<"Insert Element:\t"; cin>>data; l.create(data);
			break;
			case 2: cout<<"Delete Element:\t"; cin>>data; l.del(data);
			break;
			case 3:	cout<<"Reading Element"<<endl; l.read();
			break;
			case 4: exit(0);
		}
	}
}
//class demo{
//	int x=10,y=10;	
//	public:		
//	void operator++(){ x++; y++; }
//	int operator+(){ return x+y; }
//};
//int main(){			
//	demo d;
//	++d;	
//	cout<<"SUM = "<<+d;					
//	return 0;
//}
