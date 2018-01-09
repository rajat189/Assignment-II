#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
node *head=NULL;

void insert(int d){
	node* tmp=new node();
	tmp->data=d;
	tmp->next=head;
	head=tmp;
}

void Delete(int d){
	node *tmp=head;
	node *prev=NULL;
	int flag=0;
	if(tmp->data==d){
		flag=1;
		head=tmp->next;
		free(tmp);
	}
	while(flag!=1 && tmp!=NULL){
		if(tmp->data==d){
			flag=1;
			prev->next=tmp->next;
			free(tmp);
			break;
		}
		prev=tmp;
		tmp=tmp->next;
	}
	if(flag)cout<<"Found and Deleted.\n";
	else cout<<"Not found.\n";
}

void print(){
	node *tmp=head;
	
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	
}
int main(){
	int n,x;
	cout<<"Numberof element :- ";
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>x;
		insert(x);
	}
	print();
	cout<<"\nNumber to delete :- ";
	cin>>x;
	Delete(x);
	print();
	return 0;
}
