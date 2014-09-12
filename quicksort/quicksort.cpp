#include <fstream>
#include <vector>

using namespace std;

ifstream f("fisier.in");
ofstream g("fisier.out");

vector<int> v(200);

void quicksort(int inf, int sup)
{
    int i = inf;
    int j = sup;
    int x = v[(i+j) / 2];
    do{
            while( ( i < sup ) && ( v[i] < x ) )
                i++;
            while( ( j > inf ) && ( v[j] > x ) )
                j--;
            if( i <= j )
            {
                swap( v[i], v[j] );
                i++;
                j--;
            }
    }while( i <= j );
    if( inf < j )
        quicksort( inf, j );
    if( i < sup )
        quicksort( i, sup );
}

int main()
{
    int n;
    f >> n;
    for( int i = 0; i < n; i++ )
        f >> v[i];

    quicksort(0, n);

    for( int i = 0; i < n; i++ )
        g << v[i] << " ";

    return 0;
}
