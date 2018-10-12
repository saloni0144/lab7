#include<iostream>
using namespace std;
//print all natural numbers between 1 to n using recursion.


int func(int x, int n){
	if (x<=n){
		cout<<x<<endl;
		func(x+1,n);
	}
	return 0;
	}

int main(){
cout<<"it will enlist all the natural numbers till 'n':"<<endl;
	int x=1, n;
	cout<<"limiting number for this series is:__";
	cin>>n;
		func(x,n);
return 0;
}
