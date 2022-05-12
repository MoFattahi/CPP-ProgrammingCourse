#include <iostream>
using namespace std;

void incrementCount(int & count)
{
  count=count+1;
  }
int main()
{
  int count=0;
  incrementCount(count);
  cout<<"Pass by Reference\n";
  cout<<"Count:";
  cout<<count;
  return 0;
}