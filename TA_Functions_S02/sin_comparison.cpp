#include <iostream>
#include <ctime>
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

int main ()
{

    double x , result_taylor ,result_library;  
    double xDegrees = 180.0;
    x = xDegrees*3.14159/180;
	clock_t time_req1, time_req2,time_req;

	// Using pow function
	time_req1 = clock();
	result_taylor = taylorSine(x,1000);
	time_req2 = clock();

	cout << "Using taylor function, it took " << (float)(time_req2-time_req1)/CLOCKS_PER_SEC << " seconds" << endl;
	
	// Without pow function
	time_req = clock();
	result_library= sin(x);

	time_req = clock()- time_req;
	cout << " using cmath function, it took " << (float)time_req /CLOCKS_PER_SEC << " seconds" << endl;

	return 0;
}