#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    int a, b, c;

    for(int i = 0; i < x; i++){
        cin  >> a >> b >> c;
        if(a < c || a == c){
            cout << "+\n";
        }else{
            cout << "-\n";
        }
    }
    return 0;
}