#include <fstream>
#include <math.h>

using namespace std;

ifstream f("fisier.in");
ofstream g("fisier.out");

int main()
{
    char m[100][100];
    int n = 0;

    // citire si prelucrare
    while( f >> m[n][0] )
        n++;
    n= sqrt(n);

    int q = 0;
    for( int i = 1; i <= n; i++ )
        for( int j = 1; j <= n; j++ )
        {
            m[i][j] = m[q][0];
            q++;
        }

    g << n << "\n";

    // afisare matrice initiala
    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n; j++ )
            g << m[i][j] << " ";
        g << "\n";
    }

    g << "\n" << endl;

    // afisare parcurgere pe diagonala mica
    for( int k = 1; k <= n; k++ )
        for( int i = k; i >= 1; i-- )
            g << m[i][k+1-i] << " ";

    for( int k = n; k <= 2 * n - 1; k++ )
        for( int i = n; i >= k + 1 - n; i-- )
            g << m[i][k+1-i] << " ";

    g << "\n";

    // afisare parcurgere pe diagonala mare

    for( int k = 2 * n - 1; k >= n; k-- )
        for( int i = k + 1 - n; i <= n; i++ )
            g << m[i][k+1-i] << " ";

    for( int k = n; k >= 1; k-- )
        for( int i = 1; i <= k; i++ )
            g << m[i][k+1-i] << " ";

    f.close();
    g.close();
    return 0;
}
