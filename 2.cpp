#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m;
    cin >> n;
    for(; m <= n; m++)
    {
        if((int)sqrt(m) == sqrt(m))
            cout << m << endl;
    }
    
    return 0;
}