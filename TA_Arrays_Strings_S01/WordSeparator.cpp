/*
                                   *** Word Separator ***
Write a program that accepts as input a sentence in which all of the words are run together(Without any space), but the first character of each word is uppercase. Convert the sentence to a string in which the words are separated by spaces and only the first word starts with an uppercase letter. For example the string “StopAndSmellTheRoses.” would be converted to “Stop and smell the roses.”
*/

#include <iostream>
#include <string>
using namespace std;



int main() 
{
	const int numChars = 200;
	char sentence[numChars];
	int index = 0;
	string word;
	
	
	
	cout << "Enter a sentence without any spaces within the words: ";
	cin.getline(sentence, numChars);
	
	word.append(sentence);

	
	for (int i = 1; i < word.length(); i++) //We skip the first element in the sentence.
	{
		if (isupper(word[i]))
		{
			word.insert(i , 1 , ' ');
			i++;
			word[i] = tolower(word[i]);
		}
	}

	cout << word << endl;

}