#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    cout << "Enter the alphabet: ";

    char alphabet;

    cin >> alphabet;

    if (!isalpha(alphabet))
    {
        cout << "It is not a alphabetic character!\nTry Again." << endl;
    }

    else if (alphabet == 97 || alphabet == 105 || alphabet == 101 || alphabet == 111 || alphabet == 117)
    {
        cout << "The alphabet is a vowel." << endl;
    }

    else if (alphabet == 65 || alphabet == 73 || alphabet == 69 || alphabet == 79 || alphabet == 85)
    {
        cout << "The alphabet is a vowel." << endl;
    }

    else
    {
        cout << "The alphabet is a constant." << endl;
    }
}
