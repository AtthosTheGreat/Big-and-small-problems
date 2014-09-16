#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream f("fisier.in");
ofstream g("fisier.out");

int main()
{
    int n, cautat;
    f >> cautat;
    n = 1000000;
    vector<int> v(n);
    for( int i = 0; i < n; i++ )
        f >> v[i];

    int stanga = 0, dreapta = n;
    while ( dreapta - stanga > 1 )
        {
            int mijloc = (stanga + dreapta) / 2;
            if ( v[mijloc] > cautat )
                dreapta = mijloc;
            else
                stanga = mijloc;
        }
        if ( cautat == v[stanga] )
        {
            g << "Numarul a fost gasit pe pozitia: " << stanga;
        }

    f.close();
    g.close();
    return 0;
}
