//include library
#include<iostream>

using namespace std;

//create function to find and return max. no. out of two no.s
int MAX(int x,int y)
{
	//declare variable to accept max. value out of the two given no.s
	int z;	

	//find which of the two no.s if max.
	if(x>y)
		z=x;
	else
		z=y;

	//return the max. no.
	return z;
}

//create main
int main()
{
	//declare variables
	int a,b,max=0;

	//ask two no.s to find which one of them is max.
	cout<<"Enter two numbers to find which one of them is maximun : ";

	//take the two no.s as input
	cin>>a>>b;

	//call the function
	max=MAX(a,b);

	//show the output
	cout<<"The maximum no. out of "<<a<<" and "<<b<<" is "<<max<<endl;

	//terminate the program
	return 0;
}
