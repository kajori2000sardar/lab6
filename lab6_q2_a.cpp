//include library
#include<iostream>

using namespace std;

//create function to add two given no.s
int SUM(int x,int y)
{
	//add the no.s given as input
	int z=x+y;

	//return the summition of the no.s
	return z;
}

//create main
int main()
{
	//declare variables
	int a,b,sum=0;

	//ask for input of two no.s whose addition they want to find
	cout<<"Enter two numbers whose sum you want to find : ";

	//take the no.s as input
	cin>>a>>b;

	//call the function to add the given no.s
	sum=SUM(a,b);

	//show output
	cout<<"The addition of "<<a<<" and "<<b<<" is "<<sum<<endl;
	
	//terminate the program
	return 0;
}
