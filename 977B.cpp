#include <iostream>
using namespace std;

int main()
{
    int x; cin >> x;
    string word; cin >> word;
    int maior = 0;
    string maiorTwograms;
    
    for(int i = 1 ; i < x; i++){
        int cont = 0;
        string twograms = "";
        twograms += word[i - 1];
        twograms += word[i]; 

        int pos = word.find(twograms);
        while(pos != string::npos){
            pos = word.find(twograms, pos + 1);
            cont++;
        }

        if(cont > maior){
            maior = cont;
            maiorTwograms = twograms;
            cont = 0;
        }   
    }

    cout << maiorTwograms << endl;
}