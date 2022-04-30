// Write a program that forces the user to enter a value within a specified range.
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the minimum value in the range: ";
    int min_num;
    cin >> min_num;

    cout << "Enter the maximum value in the range: ";
    int max_num;
    cin >> max_num;

    if (min_num > max_num)
    {
        int container = min_num;
        min_num = max_num;
        max_num = container;
    }

    bool correct_entry = true;
    int entry;

    while (correct_entry)
    {
        cout << "Enter the number in range " << min_num << " and " << max_num << ": ";
        cin >> entry;
        if (entry < min_num || entry > max_num)
        {
            cout << "The input is out of range.\nTry again!" << endl;
            continue;
        }
        else
        {
            cout << entry << " is in the defined range." << endl;
            break;
        }
    }
}
