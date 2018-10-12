#include<iostream>
using namespace std;

//finding the sum of all natural numbers between 1 to n using recursion.


int fun(int n){
	int x;

	if (n>=1){
			
		x=n+fun(n-1);
	}
	
	return x;
}
int main(){
	int n, s;
	cout<<"enter the value of limiting number:__";
	cin>>n;
	cout<<" suming all natural numbers from 1 to "<<n<<" is:__"<<fun(n)<<endl;
	return 0;
}

