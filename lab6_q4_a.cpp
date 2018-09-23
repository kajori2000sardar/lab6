//include library
#include<iostream>

using namespace std;

//create a function find and return min. no. out of two given no.s
int MIN(int x,int y)
{
	//declare variable to find min. no.
	int z=0;	

	//find the min. out of two given no.s
	if(x<y)
		z=x;
	else
		z=y;

	//return the min. value
	return z;
}

//create main
int main()
{
	//declaration of variables
	int a,b,min=0;

	//ask for two no.s to find the min. no. out of them
	cout<<"Enter two numbers out of which we will find the minimum number : ";

	//take the no.s as input
	cin>>a>>b;

	//call the function
	min=MIN(a,b);

	//show the min. no. out of the given no.s
	cout<<"The minimum number out of "<<a<<" and "<<b<<" is "<<min<<endl;

	//terminate the program
	return 0;
}
