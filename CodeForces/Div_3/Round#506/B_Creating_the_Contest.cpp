#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 1, ans = 1;
    cin >> n;
    int a[n], cmp[n - 1] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] <= (2 * a[i]))
        {
            count++;
            if (count > ans)
            {
                ans = count;
            }
        }
        else
        {
            count = 1;
        }
    }
    cout << ans;
    return 0;
}