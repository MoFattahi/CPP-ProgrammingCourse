#include<iostream>

using namespace std;


int main()
{
    string a = "James Watt designed his first governor in 1788 following a suggestion from his business partner Matthew Boulton. ";
    string b = "It was a conical pendulum governor and one of the final series of innovations Watt had employed for steam engines. ";
    string c = "James Watt never claimed the centrifugal governor to be an invention of his own. ";
    string d = "A giant statue of Watt's governor stands at Smethwick in the English West Midlands.";

    string text = a+b+c+d;

    cout << text << endl;

    int n = text.length();
    int n_words = 1;
    for(int i=0; i<n; i++)
    {
        if(text[i] == ' ')
            n_words++;
    }

    cout << "\nThis text, contains " << n_words << " words.\n";
}
