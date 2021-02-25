#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s,rep;
    cin>>s;

    vector<char> a;
    

    for(int i=0 ; i<n ; i++){
        
        a.push_back(s[n-1-i]);
        string temp,subs;

        for(int j=i+1 ; j<n ; j++){
            
            temp += s[j];
        }

        for(int j=a.size()-1 ; j>=0 ; j--){
            temp += a[j];
            subs += a[j]; 
        }

        if(temp == s ){
            rep = subs;
            break;
        }
        
    }

    cout<<s;
    for(int i=0 ; i<k-1 ; i++){
        cout<<rep;
    }
    return 0;
}