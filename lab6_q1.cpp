//include library
#include<iostream>

using namespace std;

//creating function to obtain the given variable
void returnvalues(int &units, int &unitCst, int &taxRt)
{
	//enter the value of unit cost
	cout<<"Enter the value of unit cost : ";
	
	//take the unit cost as input
	cin>>unitCst;
	cout<<endl;

	//enter the value of unit
	cout<<"Enter the value of unit : ";

	//take the unit as input
	cin>>units;
	cout<<endl;

	//enter the value of tax rate
	cout<<"Enter the value of taxRt : ";

	//take the tax rate as input
	cin>>taxRt;
	cout<<endl;
}

//creating function to take unit cost, units,tax rate as input, calculate and return the values of sales tax and total tax rate
int calculate(int unitCst, int units, int taxRt, float &salesTx, float &totDue) 
{
	//calculate sales tax
	salesTx=units*unitCst*taxRt;

	//caculate total tax rate
	totDue=salesTx+(units*unitCst);
}

//creating function to show the values of unit, unit cost, tax rate, sales tax and total value
void showoutput(int units, int unitCst, int taxRt, float salesTx, float totDue)
{
	//show unit cost
	cout<<"Unit cost is : "<<unitCst<<endl;

	//show unit
	cout<<"Unit is : "<<units<<endl;

	//show tax rate
	cout<<"Tax rate is : "<<taxRt<<endl;

	//show sales tax
	cout<<"Sales Tax is : "<<salesTx<<endl;

	//show tatal value
	cout<<"The total value is : "<<totDue<<endl;
}

//create main
int main()
{
	//declaring variables
	int unitCst,units,taxRt;
	float salesTx,totDue;

	//calling function to enter values for unit cost, units and tax rate
	returnvalues(units,unitCst,taxRt);

	//calling function to calulate sales tax and total values
	calculate(units,unitCst,taxRt,salesTx,totDue);

	//showing the output
	showoutput(unitCst,units,taxRt,salesTx,totDue);

	//terminating the program
	return 0;
}


