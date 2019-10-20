#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
struct node{
	int data,pos;
	struct node *left,*right;
}*root=NULL,*temp,*t,*tem;
int main(){
    int n,data,a[20];
    cin>>n;
    char ch;
	cin>>ch;
	for(int i=0;i<n;i++){
	    switch(ch){
		    case 'i': 
		            t=(struct node *)malloc(sizeof(struct node));
				    cin>>t->data;
				    t->left=NULL; t->right=NULL;
				    if(root==NULL){
				        t->pos=1;
				        root=t;					  
				    } 
				    else{
				        temp=root;
				        while(temp!=NULL){
				            tem=temp;
				            if(temp->data>t->data) temp=temp->left;
				            else temp=temp->right;
				        }
				        if(tem->data>t->data){
				            temp->left=t;
				            t->pos=2*temp->pos;
				        }
				        else{
				            temp->right=t;
				            t->pos=(2*temp->pos+1);
				        }
				    }
				    a[i]=t->pos;
				    break;
	    	case 'd': 
	    	        cin>>data;
	    	        temp=root;
	    	        while(temp->data!=data){
	    	            tem=temp;
	    	            if(temp->data>data) temp=temp->left;
	    	            else temp=temp->right;
	    	        }
	    	        if(tem->data>data){
	    	            if(temp->left==NULL && temp->right==NULL){
	    	                tem->left=NULL;
	    	            }
	    	            else if(temp->left==NULL){
	    	                tem->left=temp->right;
	    	                temp->right->pos = 2*tem->pos;
	    	            }
	    	            else if(temp->right==NULL){
	    	                tem->left=temp->left;
	    	                temp->left->pos = 2*tem->pos;
	    	            }
	    	        }else{
	    	            if(temp->left==NULL && temp->right==NULL){
	    	                tem->right=NULL;
	    	            }
	    	            else if(temp->left==NULL){
	    	                tem->right=temp->right;
	    	                temp->right->pos = 2*tem->pos+1;
	    	            }
	    	            else if(temp->right==NULL){
	    	                tem->right=temp->left;
	    	                temp->right->pos = 2*tem->pos+1;
	    	            }
	    	        }
	    	        a[i]=temp->pos;
	    	        free(temp);
					break;
	    }
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
}
