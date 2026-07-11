#include <iostream>
using namespace std;

int main()
{
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    char direction; cin >> direction;
    string word; cin >> word;
    string nova = "";

    for(int i = 0; i < word.size(); i++){
        if(direction == 'R'){
            int pos = keyboard.find(word.at(i));
            nova += keyboard.at(pos - 1);
        } else if(direction == 'L'){
            int pos = keyboard.find(word.at(i));
            nova += keyboard.at(pos +1);
        }
    }
    cout << nova << endl;

}