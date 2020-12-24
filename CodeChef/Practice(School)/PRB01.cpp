#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){ //Optimized approach
    if(n==1) return false;

    for(int i=2 ; i*i <= n ;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    
    int num;
    cin>>num;

    if(isPrime(num)) cout<<"yes\n";
    else cout<<"no\n";
        
    }
    
    return 0;
}
