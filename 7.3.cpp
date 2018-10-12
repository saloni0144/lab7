#include<iostream>
using namespace std;

//to print all even or odd numbers in given range using recursion.
int func(int y, int n){
	if(y<=n){
	cout<<y<<endl;
	func(y+2,n);
	}
return 0;
}

int main(){
	int n, y;
cout<<"this program asks u to print the series of odd or even numbers within a specified range:_"<<endl;
cout<<"feed in the start point and end point:___"<<endl;
	cin>>y>>n;
	func(y,n);

return 0;
}
