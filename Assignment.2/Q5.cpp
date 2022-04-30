#include <iostream>
using namespace std;

void getScore(int& score)
{
    cout << "Enter your test score: ";
    cin >> score;

    validation:
    if(score<0 || score>100)
    {
        cout << "Invalid input.\nPlease enter a valid test score: ";
        cin >> score;

        goto validation;
    }
}

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
    int output = s1;
    if(s2<output)
        output = s2;
    if(s3<output)
        output = s3;
    if(s4<output)
        output = s4;
    if(s5<output)
        output = s5;

        return output;
}

void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
    int drp = findLowest(s1,s2,s3,s4,s5);

    int sum = s1+s2+s3+s4+s5-drp;
    double avg = sum/4.0;

    cout << "\nThe average of your scores is " << avg << endl;
}


int main()
{
  int score1, score2, score3, score4, score5;

  getScore(score1);
  getScore(score2);
  getScore(score3);
  getScore(score4);
  getScore(score5);

  calcAverage(score1,score2,score3,score4,score5);

  return 0;
}
