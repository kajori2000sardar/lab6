//include library
#include<iostream>

using namespace std;

//create function to change lower case of an alphabet to it's upper case
char toUpper(char ch)
{
	//changing from lower case to upper case
	char cht=toupper(ch);
	
	//returning value
	return cht;
}

//create function to change upper case of an alphabet to it's lower case
char toLower(char ch)
{
	//changing from upper case to lower case
	char cht=tolower(ch);

	//returnong value
	return cht;
}

//create main
int main()
{
	//declaration of variables
	char chr,chart;

	//ask for an alphabet
	cout<<"Enter an alphabet whose changed case is required : ";

	//take the alphabet as input
	cin>>chr;

	//check whether the given alphabet is lower case or upper case
	if(chr>='a'&&chr<='z')
	{
		//calling function to convert lower case to upper case
		chart=toUpper(chr);
		
		//showing the changed case
		cout<<"The upper case of the given lower case alphabet "<<chr<<" is "<<chart<<endl;

	}
	else
		if(chr>='A'&&chr<='Z')
		{
			//calling function to convert upper case to lower case
			chart=toLower(chr);

			//showing the changed case
			cout<<"The lower case of the given upper case alphabet "<<chr<<" is "<<chart<<endl;
		}
		else
		{
			//show that the character is not alphabet
			cout<<"The given character "<<chr<<" is not an alphabet"<<endl;
		}
		//terminating the program
		return 0;
}


