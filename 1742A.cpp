#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int numberCase; cin >> numberCase;

    for(int i = 0; i < numberCase; i++){
        int a, b, c; cin >> a >> b >> c;

        vector<int> numeros = {a, b , c};
        sort(numeros.begin(), numeros.end());

        if(numeros[0] + numeros[1] != numeros[2])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
