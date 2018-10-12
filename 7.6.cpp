//include library
#include<iostream>
using namespace std;
int ver(int x,int y)
{ 	
    //conditions to end function
	if(x%10==0) 
	{return 1;}
	//other display value
	else
	{y=x%10; 
	cout<<y;
	x=x/10;  
	ver(x,y);
	}

}
int main()
{	int x;
//ask user for a number
	cout<<"enter a number to be reversed: ";
	cin>>x;
	//call function 
	ver(x,1);
	return 0;
}

