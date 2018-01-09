#include<bits/stdc++.h>
using namespace std;

struct node{
	char data;
	node* next;
};
node *head=NULL;

void insert(char c){
	node* tmp=new node();
	tmp->data=c;
	tmp->next=NULL;
	
	if(head==NULL){
		head=tmp;
		return;	
	}
	node* tmp2=new node();
	tmp2=head;
	//cout<<"start";
	
	while(tmp2->next!=NULL){
		//cout<<tmp2->data;
		tmp2=tmp2->next;
	}
	//cout<<tmp2->data;
	tmp2->next=tmp;
}
void createList(string s){
	for(int i=0;i<s.length();i++){
		insert(s[i]);
	}
}

void add(){
	node* tmp=head;
	int sum=0;
	while(tmp!=NULL){
		sum+= int(tmp->data)-48;
		tmp=tmp->next;
	}
	cout<<"\nSum of digits is :- "<<sum<<endl;
}
void print(){
	node *tmp=head;
	cout<<"List is :- ";
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	
}
int main(){
	string s;
	cout<<"Enter the number :-";
	cin>>s;
	createList(s);
	print();
	add();
	return 0;
}
