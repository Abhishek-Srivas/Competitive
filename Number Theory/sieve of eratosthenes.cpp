#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    cout<<"Upper Limit must be <= 10^6\n";
    cout<<"Enter the Upper limit till where you want to get Prime Number:- ";
    ll max;
    cin>>max;
    int sieve[max+1];

    for(int i=2 ;i<=max ; i++) sieve[i]=1;
    sieve[0] = sieve[1] = 0;
    
    for(int i=2 ; i*i <=max ; i++){
        if(sieve[i]){
            for(int j=i*i ; j<=max ; j +=i){
                sieve[j]=0;
            }
        }
    }

    cout<<"All the prime numbers till"<<max<<"are:-\n";

    for(int i=2 ; i<=max;i++){
       if(sieve[i]){
           cout<<i<<" ";
       }
    }
    return 0;
}