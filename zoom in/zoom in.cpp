#include <iostream>

using namespace std;

int main()
{
    int n, a[50][50], b[100][100];
    cout << "n= ";
    cin >> n;
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            cin >> a[i][j];
    for( int i = 0; i < 2 * n; i = i + 2 )
        for( int j = 0; j < 2 * n; j = j + 2 )
        {
            b[i][j] = a[i/2][j/2];
            b[i+1][j] = a[i/2][j/2];
            b[i][j+1] = a[i/2][j/2];
            b[i+1][j+1] = a[i/2][j/2];
        }

    for( int i = 0; i < 2 * n; i++ )
    {
        for( int j = 0; j < 2 * n; j++ )
            cout << b[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
