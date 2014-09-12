#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100], b[50][50];
    cout << "n= ";
    cin >> n;
    for( int i = 0; i < n; i++ )
        for( int j = 0; j < n; j++ )
            cin >> a[i][j];

    for( int i = 0; i < n; i = i + 2 )
        for( int j = 0; j < n; j = j + 2 )
            b[i/2][j/2] = a[i][j];

    cout << "\n";
    for( int i = 0; i < n / 2; i++ )
    {
        for( int j = 0; j < n / 2; j++ )
            cout << b[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
