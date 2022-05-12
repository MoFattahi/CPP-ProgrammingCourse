#include <iostream>
#include <cmath>

using namespace std;
double factorial(int num){

    double fact = 1;

    for(int i = 1; i <= num; i++){

        fact *= i;

    }

    return fact;
}


double taylorSine(double num, double precision ){

    double value = 0;

    for(int n = 0; n < precision; n++){

        value += pow(-1.0, n) * pow(num, 2*n+1) / factorial(2*n + 1);

    }

    return value;

}


int main()
{
  double x , result;  
  double xDegrees = 90.0;
  
  // converting degrees to radians
  x = xDegrees*3.14159/180;
  result = taylorSine(x,10);
  
  cout << "sin(x) = " << result << endl;

  return 0;
}