/*
                                   *** Password Verifier ***
Imagine you are developing a software package that requires users to enter their own passwords. Your software requires that users’ passwords meet the following criteria:
• The password should be at least six characters long.
• The password should contain at least one uppercase and at least one lowercase letter.
• The password should have at least one digit.
Write a program that asks for a password and then verifies that it meets the stated criteria. If it doesn’t, the program should display a message telling the user why.
*/

#include <iostream>
#include <cctype>
using namespace std;


bool sixChars(char *);
bool upLowCase(char *);
bool digitAvailable(char *);

int main() 
{
	const int numCharacters = 17;
	char userPassword[numCharacters];
	
    while(true)
    {
        cout << "Enter your password: ";
	    cin.getline(userPassword,numCharacters);

	    if (sixChars(userPassword) == false)
        {
            cout << "The password must be at least six characters long.\nTry Again." << endl;
            continue;
        }

	    else if (upLowCase(userPassword) == false)
		{   
            cout << "The password must contain at least one uppercase and one lowercase\nTry Again." << endl;
            continue;
        }

	    else if (digitAvailable(userPassword) == false)
		{
            cout << "The password must contain at least one digit\nTry Again." << endl;
            continue;
        }
	    else  
		{
            cout << "New password generated." << endl;    
            break;
        }
    }
}

//----------------------------------------------------------------------------------------------------

bool sixChars(char * userPass)
{
	if (strlen(userPass) < 6)
		return false;
	else  
		return true;
}

//----------------------------------------------------------------------------------------------------

bool upLowCase(char * userPass)
{
	int upper = 0;
	int lower = 0;
	int index = 0;
	while (userPass[index] != '\0')
	{
		if ( isupper(userPass[index]) ) 
			upper++;
		else  
			lower++;
		index++;
	}

	if (upper >= 1 && lower >= 1)
		return true;
	else  
		return false;
}

//----------------------------------------------------------------------------------------------------

bool digitAvailable(char * userPass)
{
	int index = 0; //Start from the first character
	int numDigit = 0;
	while (userPass[index] != '\0')
	{
		if (isdigit(userPass[index]))
			numDigit++;
		index++;
	}
	if (numDigit >= 1)
		return true;
	else  
		return false;
}

//----------------------------------------------------------------------------------------------------






