#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x , result;
  
  
  double xDegrees = 90.0;
  
  // converting degrees to radians
  x = xDegrees*3.14159/180;
  result = sin(x);
  
  cout << "sin(x) = " << result << endl;

  return 0;
}