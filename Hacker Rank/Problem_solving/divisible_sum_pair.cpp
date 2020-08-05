#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,temp=0,sum;
    cin>>n>>k;

    int a[n];
    for (int i=0; i < n ; i++){
        cin>>a[i];
    }

    for (int i=0; i < n-1 ; i++)
    {   for(int j=i+1 ; j< n ; j++)
        {
            if( (a[i] + a[j]) % k == 0)
            {
                temp++;
            }
        }
    }
    cout<<temp;


}
