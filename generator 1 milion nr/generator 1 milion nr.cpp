#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

ofstream g("fisier.out");

int main()
{
    srand((unsigned)time(0));
    for( int i = 0; i < 5000000; i = i + 5 )
        g << rand()%5 + i << " ";
    return 0;
}
