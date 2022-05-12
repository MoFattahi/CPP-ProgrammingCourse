// Case 1: 
// The user inputs are: Volume, angle theta
// Determine length L

#include <iostream>
using namespace std;

//Volume
double getVolume()
{
    cout << "Enter the Volume: ";
    double volume;

    VALIDATION:
    cin >> volume;
    if (volume <=0)
    {
        cout << "Incorrect input for the volume.\nTry again." << endl;
        goto VALIDATION;
    }

    return volume;
}

// Theta
double getTheta()
{
    cout << "Enter the angle theta: ";
    double Theta;

    VALIDATION:
    cin >> Theta;
    if (Theta <=0)
    {
        cout << "Incorrect input for the angle.\nTry again." << endl;
        goto VALIDATION;
    }

    return Theta;
}

// Determine the length L
void calLength()
{
    double volume = getVolume();
    double theta = getTheta();

    double subcalculation = volume / (((M_PI / 3) * pow(sin((theta * M_PI / 180) / 2) , 2) * cos((theta * M_PI / 180) / 2)) + ((2 * M_PI / 3) * pow(sin((theta * M_PI / 180) / 2),3)));

    double length = pow(subcalculation , (1.0/3));

    cout << "Length: " << length << endl;
}

//-------------------------------------------------------------------------------------------------------------

// Case 2: 
// The user inputs are: angle theta, length L
// Determine Volume

// theta: it is taken using the function in case 1

//length
double getLength()
{
    cout << "Enter the length: ";
    double length;

    VALIDATION:
    cin >> length;
    if (length <=0)
    {
        cout << "Incorrect input for the length.\nTry again." << endl;
        goto VALIDATION;
    }

    return length;
}

void calVolume()
{
    double theta = getTheta();
    double length = getLength();

    double volume = (((M_PI / 3) * pow(length , 3) * pow(sin((theta * M_PI / 180) / 2) , 2) * cos((theta * M_PI / 180) / 2)) + ((2 * M_PI / 3) * pow(length , 3) * pow(sin((theta * M_PI / 180) / 2),3)));

    cout << "Volume: " << volume << endl;
}

int main()
{
    //Case 1:
    calLength();

    // Case 2:
    // calVolume();
}


