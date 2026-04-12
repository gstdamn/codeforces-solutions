#include <iostream>
using namespace std;

int main ()
{
  int numberCase;
    cin >> numberCase;
  string word = "codeforces";
  char letter;
  for (int i = 0; i < numberCase; i++) {
    cin >> letter;
    bool answer = false;
    for (int j = 0; j < word.size(); j++) {
      if(letter == word[j]){
        answer = true;
        j = word.size();
      }
    }
    cout << ((answer == true) ? "YES\n" : "NO\n");
  } 
}
