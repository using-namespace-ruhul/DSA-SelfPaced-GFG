#include<bits/stdc++.h>
 
using namespace std;

//Naive approach: TC = O(n), SC = O(1)
/*
void div(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
 
int main(){
    int n;
    cin>>n;
    div(n);
 
return 0;
}
*/

/*
//Efficient code without sorted order: TC = O(sqrt(n))


void div(int n){
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";//The number canbe represented as pair of 2 no.s product.
            }
        }

    }
}
 
int main(){
    int num;
    cin>>num;
    div(num);

return 0;
}*/

//Efficient with sorted order:

void div(int n){
     int i;
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for(; i>=1; i--){//here in the initialization part the value of i was the last vlaue of the previous loop.
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
}
 
int main(){
    int num;
    cin>>num;
    div(num);
 
return 0;
}