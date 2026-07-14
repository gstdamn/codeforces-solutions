#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll bac; cin >> bac;
    ll i = bac;
    int cont = 0;

   for(i; i > 0; i = i / 2){
        if(i % 2 != 0)
            cont++;  
    }

    cout << cont << endl;

return 0;
}