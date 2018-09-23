//include library
#include<iostream>

using namespace std;

//create function to calculate and show the output of sum of all even no.s in b/w the given no.s
int sumEvenNumbers(int x,int y)
{
	//declaration of variable
	int sE=0;

	//loop for going from first no. to second no.
	//considering x<y
	for(int i=x;i<=y;i++)
	{	
		//checking whether the no. is even or not
		if(i%2==0)
		{
			//adding even no.s 
			sE+=i;
		}
	}
	return sE;
}	
	
	
//create function to calculate and show output of sum of all odd no.s in b/w the given no.s
int sumOddNumbers(int x,int y)
{
	//declaration of variables
	int sO=0;

	//loop for going from first no. to second no.
	//considering x<y
	for(int i=x;i<=y;i++)
	{
		//checking whether the no. is odd or not
		if(i%2!=0)
		{
			//adding odd no.s
			sO+=i;
		}
	}
	return sO;
	
}

//create function to calculate and show output of sum of squares of all odd no.s in b/w the given no.s
int sumSquareOddNumbers(int x,int y)
{
	//declaration of variables
	int sSO=0,i=x;

	//loop for going from first no. to second no.
	//considering x<y
	while(i<=y)
	{
		//checking whether the no. is odd or not
		if(i%2!=0)
		{
			//adding sq.s of odd no.s
			sSO+=i*i;
		}
		i++;
	}
	return sSO;
	
}

//create function to calculate and show output of sum of all even no.s in b/w the given no.s
int sumSquareEvenNumbers(int x,int y)
{
	//declaration of variables
	int sSE=0,i=x;

	//loop for going from first no. to second no.
	//considering x<y
	while(i<=y)
	{
		//checking whether the no. is even or not
		if(i%2==0)
		{
			//adding sq.s of even no.s
			sSE+=i*i;
		}
		i++;
	}
	return sSE;
	
}

//creating main function
int main()
{
	//declaration of variables
	int a,b,sumEven,sumOdd,sumSquareEven,sumSquareOdd;

	//asking for entering two no.s
	cout<<"Enter the starting and stoping values on which the functions will be applied : ";	

	//taking the no.s as input
	cin>>a>>b;

	//calling function to get the addition of all the even no.s b/w the given two no.s
	sumEven=sumEvenNumbers(a,b);

	//calling function to get the addition of all the odd no.s b/w the given two no.s
	sumOdd=sumOddNumbers(a,b);

	//calling function to get the addition of sq.s of all the even no.s b/w the given two no.s
	sumSquareEven=sumSquareEvenNumbers(a,b);

	//calling function to get the addition of sq.s of all the odd no.s b/w the given two no.s
	sumSquareOdd=sumSquareOddNumbers(a,b);

	//showing the outputs of all the functions applied on the no.s b/w those given two no.s
	
	//showing the sum of all even no.s in b/w the given two no.s
	cout<<"The sum of all even numbers between "<<a<<" and "<<b<<" is "<<sumEven<<endl;

	//showing the sum of all odd no.s in b/w the given two no.s
	cout<<"The sum of all odd numbers between "<<a<<" and "<<b<<" is "<<sumOdd<<endl;
	
	//showing the sum of sq.s of all the odd no.s in b/w the given two no.s
	cout<<"The sum of squares of all odd numbers between "<<a<<" and "<<b<<" is "<<sumSquareOdd<<endl;

	//showing the sum of sq.s of all the even no.s in b/w the given two no.s
	cout<<"The sum of squares of all the even numbers between "<<a<<" and "<<b<<" is "<<sumSquareEven<<endl;

	//terminating the program
	return 0;
}




	
