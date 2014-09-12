#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cout << "n= ";
    cin >> n;
    cin >> a;
    n--;
    cin >> b;
    n--;
    bool crescator = 0, crescator_actual;
    int schimbat = 0;
    if( a < b )
        crescator = 1;
    a = b;

    while( n > 0 )
    {
        cin >> b;
        if( a < b )
            crescator_actual = 1;
        else
            crescator_actual = 0;

        if( crescator_actual != crescator )
        {
            schimbat++;
            crescator = crescator_actual;
        }
        n--;
    }

    cout << schimbat << endl;

    if( schimbat > 2 )
        cout << "NU";
    else
        cout << "DA";

    return 0;
}
