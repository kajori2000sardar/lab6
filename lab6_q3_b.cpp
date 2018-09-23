//include library
#include<iostream>

using namespace std;

//create a function to find max. value out of the two given no.
void MAX(int x,int y,int &z)
{
	//find the max. value out of the two
	if(x>y)
		z=x;
	else
		z=y;

}

//create main
int main()
{
	//declare variables
	int a,b,max=0;

	//ask for two no.s to find which of them is max.
	cout<<"Enter two numbers to find which of them of maximum : ";

	//take the no.s as input
	cin>>a>>b;

	//call the function
	MAX(a,b,max);

	//show the max. value out of the two given no.s
	cout<<"The maximum number out of "<<a<<" and "<<b<<" is "<<max<<endl;

	//terminate the program
	return 0;
}

