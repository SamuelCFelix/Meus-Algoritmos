#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Quantidade de números que você irá inserir: " << endl;
    cin >> n;
    int v[n];
    int comp[n];
    int k = 0;
    int numero = 1;

    for (int i = 0; i < n; i++){
        cout << "Número " << numero << ": ";
        numero++;
        cin >> v[i];
        comp[i] = v[i];
    }
    bool menor = true;
    while ( k != n ){
        for ( int i = k; i < n; i++){
            for( int j = k; j < n; j++){
                if(v[i] <= comp[j]){

                } else
                    menor = false;
            }
            if ( menor == true){
                v[k] = v[i];
                v[i] = comp[k];
                for (int i = 0; i < n; i++){
                   comp[i] = v[i];
                }
                k++;
            }
            menor = true;
        }
    }
    cout << "Números organizados:" << endl;
    for ( int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
