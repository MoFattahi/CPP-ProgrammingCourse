#include <iostream>

using namespace std;

int main() {

  double speed;
  double hours;

  do{
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
  }
  while(speed < 0);

  do{
  cout << "How many hours has it traveled? ";
  cin >> hours;
  }
  while(hours < 1);

  cout << "--------------------------" << endl;

  for(int i = 1 ; i <= hours ; i++){
      cout << i << "\t" << i*speed << endl;
  }
}
