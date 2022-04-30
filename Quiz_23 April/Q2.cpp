#include<iostream>
#include<cmath>
using namespace std;


const double g = 9.81;
//---------------------------------------------------------------------------------------------
double validation()
{
    double myVar;

    Status:
    cin >> myVar;

    if (myVar < 0)
    {
        cout << "Incorrect input.\nTry again." << endl;
        goto Status;
    }
    else
    {
        return myVar;
    }
}
//---------------------------------------------------------------------------------------------
double range(double v0 , double theta , double y0)
{
    double d = v0*cos(theta)/g*(v0*sin(theta)+sqrt(v0*v0*sin(theta)*sin(theta)+2*g*y0));
    return d;
}
//---------------------------------------------------------------------------------------------
double timeToStop(double v0 , double theta , double y0)
{
    double time = (v0*sin(theta)+sqrt(v0*v0*sin(theta)*sin(theta)+2*g*y0))/g;
    return time;
}
//---------------------------------------------------------------------------------------------
double hHeight(double v0 , double theta , double y0)
{
    double h = v0*v0*sin(theta)*sin(theta)/(2*g) + y0;
    return h;
}
//---------------------------------------------------------------------------------------------
double getTime()
{
    cout << "Enter the time point: ";
    double time = validation();
    return time;
}
//---------------------------------------------------------------------------------------------
void location(double v0 , double theta , double x0, double y0)
{
    double x,y;
    // Specific time point
    double userTime = getTime();

    // Time to stop;
    double timeStop = timeToStop(v0, theta, y0);

    if (userTime < timeStop)
    {
        x = v0 * cos(theta) * userTime + x0;
        y = -0.5 * g * userTime * userTime + v0 * sin(theta)* userTime + y0;
    }
    else
    {
        x = range(v0 , theta, y0);
        y = 0;
    }

    cout << "Location:\nX = " << x << " m" << "\nY = " << y << " m" << endl;
}
//---------------------------------------------------------------------------------------------
int main()
{
    // Get user data
    double v0, x0, y0, theta;
    cout << "Please enter the initial velocity: ";
    v0 = validation();
    cout << "Please enter the initial angle: ";
    theta = validation();
    cout << "Please enter the initial x coordinate(x0): ";
    x0 = validation();
    cout << "Please enter the initial y coordinate(y0): ";
    y0 = validation();

    // Conversion(degree to radian)
    theta *= M_PI/180.;


    // Final Output
    cout << "\n\nRange: " << range(v0 , theta, y0) << " m" << endl;
    cout << "Time to stop: " << timeToStop(v0 , theta, y0) << " s" << endl;
    cout << "Highest height: " << hHeight(v0 , theta, y0) << " m\n\n" << endl;

    location(v0 , theta, x0, y0);
}
//-------------------------------------------------------------------------------------------------------------
