#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,m,temp=0,sum;
    cin>>n;
    int a[n];

    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
    }

    cin>>d>>m;

    for(int i=0 ; i <= n-m ;i++)
    {
        sum=0;
        for(int j=i ; j< m+i ;j++)
        {
            sum += a[j];
        }
        if(sum == d)
            temp++;
    }

    cout<<temp;

    return 0;
}
