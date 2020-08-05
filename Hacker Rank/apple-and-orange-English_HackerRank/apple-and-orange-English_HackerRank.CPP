#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n,count_a=0,count_o=0;
    cin>>s>>t>>a>>b>>m>>n;
    int apple[m],orange[n];

    for(int i=0 ; i < m ; i++)
    {
        cin>>apple[i];
        apple[i] += a;
        if(apple[i]>=s && apple[i]<=t)
        count_a++;
    }

    for(int i=0 ; i < n ; i++)
    { 
        cin>>orange[i];
        orange[i] += b;
        if(orange[i]>=s && orange[i]<=t)
        count_o++;
    }

    cout<<count_a<<endl<<count_o;
  
    return 0;
}