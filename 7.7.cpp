//include library
#include<iostream>
using namespace std;
//checking ki koi number palindrome hai ya nahi using recursion 
//declare function
int pal(int a,int b, int c) 
{ 	
	if(a%10==0) 
	{cout<<c<<endl;
	return c;}
	else
	{b=a%10; 
	
	a=a/10;  
	c=c*10+b; 
	pal(a,b,c);
	}
	
	
}
//main function
int main()
{	int a,b;
	cout<<"enter a number to be reversed "<<endl;
	cin>>a;
	b=pal(a,1,0);
	//check if number is a palindrome or not
	if(a==b)
	cout<<"yeah!,its a palindrome"<<endl;
	else
	cout<<" palindrome nahi hai"<<endl;
	return 0;
}

