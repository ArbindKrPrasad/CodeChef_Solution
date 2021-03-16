#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (x + num >= h)
        {
            flag = true;
            break;
        }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}