#include <iostream>

using namespace std;

int main()
{
    int a[50][50], m, b[50][50], n;
    cout << "m= ";
    cin >> m;
    for( int i = 0; i < m; i++ )
        for( int j = 0; j < m; j++ )
            cin >> a[i][j];
    cout << "n= ";
    cin >> n;
    for( int i = 0; i < m; i++ )
        for( int j = 0; j < m; j++ )
            cin >> b[i][j];

    int nr = 0;
    for( int i = 0; i < m - n + 1; i++ )
        for( int j = 0; j < m - n + 1; j++ )
        {
            if( a[i][j] == b[0][0] )
            {
                bool egal = 1;
                for( int x = 0; x < n && egal == 1; x++ )
                    for( int y = 0; y < n && egal == 1; y++ )
                        if( a[i+x][j+y] != b[x][y] )
                            egal = 0;
                if( egal == 1 )
                    nr++;
            }
        }

    cout << nr;

    return 0;
}
