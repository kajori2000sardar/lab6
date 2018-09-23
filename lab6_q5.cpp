//include library
#include<iostream>

using namespace std;

//create function to add to given no.s 
void SUM(int x,int y)
{
	//declaring variable
	int sum;

	//adding two no.s
	sum=x+y;

	//showing the summition
	cout<<"The sum of "<<x<<" and "<<y<<" is "<<sum<<endl;
}

//create function to find maximum
void MAX(int x,int y)
{
	//declaring variables
	int max;

	//finding which of the two no.s is maximum
	if(x>y)
		max=x;
	else
		max=y;

	//showing which of the two no.s is maximum
	cout<<"The maximum out of "<<x<<" and "<<y<<" is "<<max<<endl;
}

//create function to find minimum
void MIN(int x,int y)
{
	//declaring variables
	int min;

	//finding which of the two no.s is minimum
	if(x<y)
		min=x;
	else
		min=y;

	//showing which of the two no.s is minimum
	cout<<"The minimum out of "<<x<<" and "<<y<<" is "<<min<<endl;
}

//create main
int main()
{
	//declaring variables
	int a,b,n;

	//ask for two no.s
	cout<<"Enter two no.s : ";

	//take the no.s as input
	cin>>a>>b;

	//choose which of the three programs to perform
	cout<<"Enter which of the following do you choose to perform among the following on the two entered numbers : "<<endl;
	cout<<"2. Adding both the numbers "<<endl;
	cout<<"3. Finding maximum out of the two numbers "<<endl;
	cout<<"4. Finding minimum out of the two numbers "<<endl;
	cout<<"Enter the choice : ";

	//take the choice as input
	cin>>n;

	//calling the functions according to given choice
	if(n==2)
		SUM(a,b);
	if(n==3)
		MAX(a,b);
	if(n==4)
		MIN(a,b);

	//terminating the program
	return 0;
}	

























