#include<bits/stdc++.h>
 
using namespace std;
/*
 //iterative solution : TC = O(n) ,SC = O(1)
int fact(int n){
    int f=1;
    for(int i=2; i<=n; i++){
        f = f*i;
    }

    return f;
}
 
int main(){
    int num;
    cin>>num;
    cout<<fact(num);
 
return 0;
}
*/

//recursive solution: TC = O(n) , SC = O(n) since there will be a moment when the function will have n+1 functions in the function call stack.

int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
    return(n*fact(n-1));
}
 
int main(){
    int num;
    cin>>num;
    cout<<fact(num);
 
 
return 0;
}