#include<iostream>
#include<math.h>

using namespace std;
//efficient method
int main()
{
    int n;
    cin >> n;
    if((int)log2(n) == log2(n))
    {
        cout << "yes" << endl;
        return 0;
    }
    
    cout << "no" << endl;
    return 0;
}