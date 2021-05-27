#include<bits/stdc++.h>
 
using namespace std;
/*
//Optimised approach:
void primefactors( int n){
    if(n<=1) 
    return; 
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;//this checks if the current i is still present in n.
        }
    }
    if(n>1)//the largest prime factor is fallen in this explicitely which appears only one time in the given number.
    cout<<n<<" ";
}
 
int main(){
    int num;
    cin>>num;
    primefactors(num);

 
return 0;
}*/

//Further optimised: We are gonna check for 2s and 3s which will get rid of so many numbersn.

 
void printPrimefactors(int n){
    if(n<=1)
    return;
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    } 
    while(n%3==0){
        cout<<3<<" ";
        n/=3;
    }
    for(int i=5; i*i<=n; i+=6){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2)==0){
            cout<<(i+2)<<" ";
            n/=(i+2);
        }
    }
    if(n>1)
    cout<<n<<" ";

}

int main(){
    int num;
    cin>>num;
    printPrimefactors(num);//almost same as prime numbers code. 

 
return 0;
}//for prime no.s TC = O(sqrt(n)), for composite umbers TC < O(sqrt(n))