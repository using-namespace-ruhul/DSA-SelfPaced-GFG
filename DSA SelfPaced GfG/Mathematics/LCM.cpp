#include<bits/stdc++.h>
 
using namespace std;
/*
//naive approach: TC = O(a*b-max(a,b))
int lcm( int a, int b){
    int res;
    res = max(a,b);//we start from the maximum and in an infinite loop we  check which number divides both of them.
    while(true){
        if(res%a==0 &res%b==0){
            return res;
        }
        res++;
    }

return res;
}
 
int main(){
    int x,y;
    cin>>x>>y;
    cout<<lcm(x,y);

 
return 0;
}
*/

//Efficient solution: With the help of Euclidean theorem to find gcd.

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else
return gcd(b,a%b);    
}
 
int lcm(int a, int b){
 
return (a*b)/gcd(a,b);//constant work
}
 
int main(){
       int x,y;
    cin>>x>>y;
    cout<<lcm(x,y);
 
return 0;
}//TC = O(log(min(a,b)))
