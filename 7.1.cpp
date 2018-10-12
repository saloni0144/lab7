#include<iostream>
using namespace std;

// to find power of any number using recursion.;


int func(int b,int p){
	int x;
//ask for values

	if(p==0){
		return 1;
		}
	
	else{
		x=b*func(b,p-1);
		
	}
	
	return x;
}

int main(){
	int b, p;
	cin>>b>>p;
cout<<func(b, p);
	
	return 0;
}
