#include<bits/stdc++.h>

 
using namespace std;
/*
//Naive approach:
bool isPrime(int n){
    if(n==1)
    return false;

    if(n==2||n==3)
    return true;

    if(n%2==0||n%3==0)
    return false;

    for(int i=5; i<=sqrt(n); i+=5){
        if(n%i==0||n%(i+2)==0)
        return false;
    }
return true;
}

void printPrimes(int m){
      for(int i=2; i<=m; i++){
          if(isPrime(i)==1){
              cout<<i<<" ";
          }   
      }
}

int main(){
    int num;
    cin>>num;
    printPrimes(num);
 
return 0;
}*/

//Sieve Of Eratosthenes:

void sieve( int n){
    vector<bool>isPrime(n+1,true);
     for (int i=2; i<=n; i++){
         if(isPrime[i]){
             cout<<i<<" ";
             for(int j=i*i; j<=N; j+=i){
                 isPrime[j]=false;
             }
         }
     }
    // for(int i=2; i<=n; i++){
     //    if(isPrime[i])
    //     cout<<i<<" ";
    // }
}
 
int main(){
     int n;
     cin>>n;
     sieve(n);
 
return 0;
}// TC = O(nloglog(n)) < O(nsqrt(n))