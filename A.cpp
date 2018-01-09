#include<bits/stdc++.h>
using namespace std;
void fib(int n){
	int a,b,c;
	a=1;b=1;
	cout<<endl<<a<<" "<<b<<" ";
	for(int i=0;i<n-2;i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
int main(){
	int n;
	cout<<"enter lenth of series :- ";
	cin>>n;
	fib(n);
	return 0;
}
