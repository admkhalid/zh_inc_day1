#include<iostream>

using namespace std;

int main()
{
    int arr[8][8];
    int n, x, y, p, q, count = 0, tx, ty, it = 1, k = 1;
    cout << "no. of obst: ";
    cin >> n;
    cout << "enter obst co_ords:" << endl;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            arr[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cin >> p; cin >> q;
        arr[p][q] = 0;
    }

    cout << "start co_ords:";
    cin >>x; cin >> y;



    while(it <= 8)
    {
        tx = x;
        ty = y;
        while((1 <= tx && tx <= 6) && (1 <= ty && ty <= 6))
        {
            if(it == 1)
            {
                if(arr[--tx][ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 2)
            {
                if(arr[--tx][++ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 3)
            {
                if(arr[tx][++ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 4)
            {
                if(arr[++tx][++ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 5)
            {
                if(arr[++tx][ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 6)
            {
                if(arr[++tx][--ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 7)
            {
                if(arr[tx][--ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
            else if(it == 8)
            {
                if(arr[--tx][--ty] == 0)
                    break;
                else
                {
                    count++;
                }
            }
        }
        it++;
    }
    cout << count << endl;
}