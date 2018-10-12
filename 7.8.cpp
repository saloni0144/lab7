//include library
#include<iostream>
using namespace std;
//to find the sum of digits of a number
//declare function 

int sum(int a,int b, int c)
{	
	if(a%10==0) 
	{cout<<c<<endl;
	return c;}
	
	else
	{b=a%10; 
	a=a/10; 
	c+=b; 
	sum(a,b,c);
	}
}
//main function
int main()
{	int a;
	cout<<"please enter any number:"<<endl;
	cin>>a;
	//calling a function
	cout<<"The sum of its digits are : "<<endl;
	sum(a,1,0); 
}

