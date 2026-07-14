#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string user; cin >> user;
    int cont = 0;

    sort(user.begin(), user.end());

    for(int i = 1; i < user.size();i++){
        if(user.at(i-1) != user.at(i))
            cont++;
    }

    if(cont % 2 == 0)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

return 0;
}