#include<bits/stdc++.h>
 
using namespace std;

//naive approach: TC: O(min(a,b))
/*
int gcd(int a, int b){
    int res, i;
for(i=min(a,b); i>0; i--){//since at max they both can be divisible by the minimum of a and b
    if(a%i==0 && b%i==0){
       break;
    }
}
return i;
}
 
int main(){
   int x,y;
   cin>>x>>y;
   cout<<gcd(x,y);
 
return 0;
}
*/

/*
//Euclidean Algo: 
int gcd(int a, int b){//TC

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
 
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);

return 0;
}
*/

//Optimised Euclidean Algo: TC = O(log(min(a,b)))

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else
    return gcd(b,a%b);
}
 
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);

 
return 0;
}