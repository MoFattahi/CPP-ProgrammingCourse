#include <iostream>
#include <math.h>
using namespace std;

// Get Time
double getTime()
{
    cout << "Enter the time (hour): ";
    double time;
    
    validation:
    cin >> time;
    if (time < 0)
    {
        cout << "Incorrect Input" << endl;
        goto validation;
    }

    return time;
}

// Determine the distance between the airplanes(A,B)
void calDistance()
{
    VALIDATION:
    double time = getTime(); //hour

    // Airplane A
    double distance_A = 800 - (320 * time); //mile

    // Airplane B
    double distance_B = 410 - (160 * time); //mile

    if (distance_A < 0 || distance_B < 0)
    {
        cout << "At this time point, one of the planes would pass the origin.\nPlease change the time point." << endl;

        goto VALIDATION;
    }

    // A to B
    double totalDistance = sqrt(pow(distance_A , 2) + pow(distance_B , 2)); //mile

    cout << "Distance between A and B at this time point: " << totalDistance << endl; 
}

int main()
{
    calDistance();
}




