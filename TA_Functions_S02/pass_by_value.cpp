#include <iostream>
using namespace std;

void incrementCount(int count)//pass by value
{
  count=count+1;
}
int main()
{
  int count=0;
  incrementCount(count);
  cout<<"Pass by value\n";
  cout<<"Count:";
  cout<<count;
  return 0;
}