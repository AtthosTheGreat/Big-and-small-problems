#include <fstream>
#include <vector>

using namespace std;

fstream f("fisier.in");
ofstream g("fisier.out");

int main()
{
    int cautat;
    f >> cautat;
    vector<long long> v(1000000);
    for( int i = 0; i < 1000000; i++ )
        f >> v[i];

    int i = 0;
    while( i < 1000000 && v[i] != cautat )
        i++;
        g << i;
    return 0;
}
