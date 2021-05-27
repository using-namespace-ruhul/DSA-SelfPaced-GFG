#include<bits/stdc++.h>
 
using namespace std;
/*
//naive approach: TC = O(n)
bool prime(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
    
    return true;
}
 
int main(){
    int num;
    cin>>num;
    if(prime(num)==1){
        cout<<"YES PRIME";
    }
    else{
        cout<<"NO PRIME";
    }

 
return 0;
}*/

/*
//Efficient approach:

bool prime(int n){
     if(n==1)
     return false;
     for(int i=2; i<=sqrt(n); i++){
         if(n%i==0)
         return false;
     }

return true;
}


int main(){
    int num;
    cin>>num;
    cout<<(prime(num)? "YES" : "NO");

 
return 0;
}// TC = O(Sqrt(n))
*/

//More efficient approach:

bool prime(int n){
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
 
int main(){
    int num;
    cin>>num;
    cout<<(prime(num)? "YES" : "NO");
 
return 0;
}
//It is 3x faster than the efficient one.

