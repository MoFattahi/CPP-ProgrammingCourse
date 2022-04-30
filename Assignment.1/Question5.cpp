#include <iostream>

using namespace std;

 int main(){
     int num;
     int min;
     int max;

     cout << "Enter you number (hint: to exit the loop give -99 as your number): ";
     cin >> num;

     max = num;
     min = num;

     while(num != -99){

        if (num > max){
            max = num;
        }
        else if (num < min){
            min = num;
        }

        cout << "Enter you number: ";
        cin >> num;

     }

    cout << "\nyour biggest number is: " << max << endl;
    cout << "your smallest number is: " << min << endl;


 }
