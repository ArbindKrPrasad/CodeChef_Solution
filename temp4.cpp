#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, d, arr[10001];
    fill(arr, arr + 10001, 0);
    cin>>a;
    while (cin >> d)
    {
        arr[d - 1] = 1;
    }

    for (int j = 0; j < a; j++)
    {
        if (arr[j] == 0)
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}