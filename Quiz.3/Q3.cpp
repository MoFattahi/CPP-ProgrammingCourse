#include <iostream>
#include <cctype>
#include <string>
using namespace std;
#define SIZE 9

string myArr[SIZE];
void findNum(string);
void bubbleSortArr(string []);

int main()
{
    string myText = "There was not much variation in cinema attendance in 2003, 2005 and 2007. In all the three years, nearly 10 percent of people frequented the cinemas from Tuesdays to Thursdays. The least number of people viewed cinema on Mondays. This percentage was 7.5 percent, 6.5 percent and 5 percent in all the years respectively. A little over 15 percent watched the cinemas on Fridays, in all the three given years. On Saturdays and Sundays the cinema halls were flooded with people as over 25 percent and 20 percent went for viewing films on these two days respectively. Overall, the number of people going to the cinemas grew slightly on Saturdays and the number frequenting cinemas on Mondays fell slowly over the given years.";

    findNum(myText);
    bubbleSortArr(myArr);
}

//****************************************************************************************************************

void findNum(string text)
{

    int index = 0;

    for (int i=0; i<text.size(); i++)
    {
        if (isdigit(text[i]))
        {
            myArr[index] += text[i];

            if (!isdigit(text[i+1]))
            {
                if (text[i+1] == '.' && isdigit(text[i+2]))
                {
                    myArr[index] += '.';
                }
                else
                {
                   index++;
                }
            }
        }
    }

    for (int k=0; k<SIZE; k++)
    {
        cout << myArr[k] << ' ';
    }
    cout << endl;
}

//****************************************************************************************************************

void bubbleSortArr(string myArr[])
{
    long double sortedArr[SIZE];

    for (int k=0; k<SIZE; k++)
    {
        sortedArr[k] = stod(myArr[k]);
    }

    for(int i = 1; i < SIZE; i++)
	{
		for(int r = 0; r < SIZE; r++)
		{
			if((sortedArr[r]) > (sortedArr[r+1]))
			{
				long double temp = sortedArr[r];
                sortedArr[r] = sortedArr[r+1];
                sortedArr[r+1] = temp;
			}
		}
	}   

    for (int i= 0; i<SIZE; i++)
    {
        cout << sortedArr[i] << ' ';
    }
    cout << endl;
}

//****************************************************************************************************************



     


    
