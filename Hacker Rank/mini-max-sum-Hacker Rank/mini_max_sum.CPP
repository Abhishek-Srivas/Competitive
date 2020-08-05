#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll a[5],b[5],sum=0;
    for(int i=0 ; i<5 ; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    for(int i=0; i<5 ; i++)
    {
        b[i] = sum - a[i]; 
    }

    std::sort(b,b+5);
    cout<<b[0]<<" "<<b[4];


    return 0;
}shreyas 
yo yo honeysingh 
bye bye corona virus
yo ho ho ho
one piece 
