#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(40 - a[i] < 3)
        {
            temp = a[i]/5;
            temp++;
            temp *= 5;
            if(temp - a[i] < 3)
            a[i]=temp;
        }
        temp=0;
        cout<<a[i]<<endl;
    }

    return 0;
}