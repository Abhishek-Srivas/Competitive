#include<bits/stdc++.h>
using namespace std;

bool isPrimeNotOptimized(int n){ //Naive approach
    
    if(n==1) return false;

    for(int i=2 ; i<n ;i++){
        if(n%2 == 0) return false;
    }

    return true;
}


bool isPrime(int n){ //Optimized approach
    if(n==1) return false;

    for(int i=2 ; i*i <= n ;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the Number to Check Prime:- ";
    cin>>num;

    // bool isprm = isPrimeNotOptimized(num);
    bool isprm = isPrime(num);
    if(isprm){
        cout<<num<<" is Prime\n";
    }
    else
    {
        cout<<num<<" is not Prime\n";
    }
    
    return 0;
}
