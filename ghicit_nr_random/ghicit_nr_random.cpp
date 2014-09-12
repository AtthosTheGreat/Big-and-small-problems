#include <iostream>

using namespace std;

int main()
{
    cout << "1 inseamna nr ghicit \n";
    cout << "0 inseamna nr este mai mic \n";
    cout << "2 inseamna nr este mai mare \n";
    int ghicit, stanga = 0, dreapta = 100, n = 7, i = 0;
    while( i < n && ghicit != 1 )
    {
        cout << "Este nr egal cu " << stanga + ( dreapta - stanga ) / 2 << "? \n";
        cin >> ghicit;
        if( ghicit == 0 )
            dreapta = stanga + ( dreapta - stanga ) / 2;
        if( ghicit == 2 )
            stanga = stanga + ( dreapta - stanga ) / 2;
        i++;
    }
    if( i == n && ghicit != 1 )
        cout << "Nu au fost introduse datele bune si programul nu a reusit sa ghiceasca numarul.";

    if( ghicit == 1 && i == 1 )
        cout << "Numarul a fost ghicit dintr-o incercare de catre calculator.";

    if( ghicit == 1 && i != 1 )
        cout << "Numarul a fost ghicit in " << i << " incercari de catre calculator.";

    return 0;
}
