//include library
#include<iostream>

using namespace std;

//create a function to find the min. of two given no.s
void MIN(int x,int y,int &z)
{
	//find min. out of the two given no.s
	if(x<y)
		z=x;
	else
		z=y;
}

//create main
int main()
{
	//declaring variables
	int a,b,min=0;

	//ask for two no.s to find the min. out of them
	cout<<"Enter two numbers to find which of them is minimum : ";

	//take the no.s as input
	cin>>a>>b;

	//call the function to find which of the two no.s is min.
	MIN(a,b,min);

	//show which of the two given no. is min.
	cout<<"The minimum number out of "<<a<<" and "<<b<<" is "<<min<<endl;

	//terminate the program
	return 0;
}
