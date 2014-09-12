#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cout << "N= ";
    cin >> N;
    int n =0, initial_N = N;
    while( N > 0 )
    {
        n = n + N;
        N--;
    }

    int i = 0;
    vector<int> v;

    int nr = 1;
    while( i < n )
    {
        int x = nr;
        int ogl_x = 0;
        bool zero = 0;
        if( x % 10 == 0 )
        {
            zero = 1;
        }
        while( x > 0)
        {
            ogl_x = ogl_x * 10 + x % 10;
            x = x / 10;
        }

        while( ogl_x > 0 )
        {
            v.push_back( ogl_x % 10);
            i++;
            ogl_x = ogl_x / 10;
        }
        if( zero == 1 )
        {
            v.push_back( 0 );
            i++;
        }
        nr++;
    }

        cout << v[i-initial_N-1] << " " << v[n-1];

    return 0;
}
