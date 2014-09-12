#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a(100);
int n;

void interclasare( int i, int m, int j )
{
    vector<int> b(1000);
    int x = i;
    int k = 1;
    int y = m + 1;
    while( x <= m && y <= j )
        if( a[x] < a[y] )
        {
            b[k] = a[x];
            k++;
            x++;
        }
        else
        {
            b[k] = a[y];
            k++;
            y++;
        }
    while( x <= m )
    {
        b[k] = a[x];
        k++;
        x++;
    }
    while( y <= j )
    {
        b[k] = a[y];
        k++;
        y++;
    }
    int t = i;
    for( k = 1; k <= ( j - i ) + 1; k++ )
    {
        a[t] = b[k];
        t++;
    }
}

void divimp( int i,int j )
{
    if( i < j )
    {
        int m = ( i + j ) / 2;
        divimp( i, m );
        divimp( m + 1, j );
        interclasare( i, m, j );
    }
}

int main()
{
    cout << "n= ";
    cin >> n;
    for( int i = 1; i <= n; i++ )
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    divimp( 1, n );
    for( int i = 1; i <= n; i++ )
        cout << a[i] << " ";
}
