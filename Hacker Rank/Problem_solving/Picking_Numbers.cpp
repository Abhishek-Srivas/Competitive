#include<bits/stdc++.h>
using namespace std;

int main()
{     
    int n,c=0,max;
    cin>>n;
    int a[n];
    map<int, int>mp; 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=mp[a[i]]+1;
        if(c<a[i])
        {
            c=a[i];
        }  
       
    }
   
       for(int i=1;i<c;i++)
       {
           if((mp[i]+mp[i+1])>max)
           {
               max=mp[i]+mp[i+1];
           }
       }
       cout<<max;
   
       
    
}