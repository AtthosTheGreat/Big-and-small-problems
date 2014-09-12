#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m, n, a[100][100], b[100][100];
    cout << "m= ";
    cin >> m;
    cout << "n= ";
    cin >> n;
    for( int i = 1; i <= n; i++ )
        for( int j = 1; j <= n; j++ )
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }

    for( int i = 1; i <= n / 2; i++ )
        for( int j = 1; j <= n; j++ )
            swap( b[i][j], b[n-i+1][j] );

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n; j++ )
            cout << b[i][j] << " ";
        cout << "\n";
    }
    cout << "\n \n";

    for( int i = 1; i <= n; i++ )
        for( int j = 1; j <= n; j++ )
            b[i][j] = a[i][j];

    for( int i = 1; i <= n; i++ )
        for( int j = 1; j <= n / 2; j++ )
            swap( b[i][j], b[n-i+1][j] );

    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1; j <= n; j++ )
            cout << b[i][j] << " ";
        cout << "\n";

    }

    return 0;
}
