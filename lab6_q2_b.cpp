//include library
#include<iostream>

using namespace std;

//create function to add two no.s
void SUM(int x,int y,int &z)
{
	//add the given no.s
	z=x+y;
}

//create main
int main()
{
	//declare variables
	int a,b,sum=0;

	//ask for two no.s whose sum they want to find
	cout<<"Enter the numbrs whose sum you want to find : ";

	//take the no.s as input
	cin>>a>>b;

	//call the function
	SUM(a,b,sum);

	//show the result as output
	cout<<"The addition of "<<a<<" and "<<b<<" is "<<sum<<endl;

	//terminate the program
	return 0;
}
