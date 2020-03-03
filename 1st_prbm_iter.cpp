#include<iostream>
#include<math.h>

using namespace std;
//iterative method
int main()
{
    int n;

    cin >> n;

    if (n == 0)  
    {
        cout << "no" << endl;
        return 0;
    }  
    while (n != 1)  
    {  
        if (n%2 != 0)  
        {
            cout << "no" << endl;
            return 0;
        }
        n = n/2;
    }  
    cout << "yes" << endl;
    return 0;
}