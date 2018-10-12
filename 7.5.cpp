#include<iostream>
using namespace std;
//Write a C++ program to find sum of all even or odd numbers in given range using recursion.
//first take the number upto where the range needs to be taken
//now ,adding 2 to the number , continue to add it to the function

int func(int m, int n){
	int x;
	if(n>=m){
		x=n+func(m, n-2);
	}
	else{
		return 0;
	}
	return x;
}
int main(){
	int m, n;
	cout<<"place  the value of first number and second number: ";
	cin>>m>>n;
	cout<<"summing  all odd/even numbers from "<<m<<" to "<<n<<" is: "<<func(m, n)<<endl;
	
	return 0;
	}

