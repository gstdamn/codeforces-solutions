#include <iostream>
using namespace std;
int main()
{
  int numberCase;
    cin>> numberCase;
  int hours , minutes, minutesLeft;
  for (int i = 0; i < numberCase; i++) {
    cin >> hours >> minutes;
    minutesLeft = ((24 - hours) * 60) - minutes;
    cout << minutesLeft << endl;
  }
}
