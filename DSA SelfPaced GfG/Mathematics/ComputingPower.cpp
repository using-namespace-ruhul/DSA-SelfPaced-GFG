#include<bits/stdc++.h>
 
using namespace std;
 /*
 //Naive approach:

int exp(int x, int n){
    int res = 1 ;
    for(int i=1; i<=n; i++){
        res = res*x;
    }
    return res;
}


int main(){
    int x,n;
    cin>>x>>n;
    cout<<exp(x,n);
 
return 0;
}// TC = O(n)
*/
/*
//Efficient recursions: TC = O(log2(n)) 
int exp(int x, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return exp(x,n/2)*exp(x,n/2);
    }
    else{
        return exp(x,n-1)*x;
    }
}

 
int main(){
    int x,n;
    cin>>x>>n;
    cout<<exp(x,n);   
 
return 0;
}*/

//Binary approach:Iterative efficient solution:

// Iterative C program to implement pow(x, n)

 
// Iterative Function to calculate (x^y) in O(logy) 
int power(int x, unsigned int y)
{
    int res = 1; // Initialize result
 
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y&1)//y%2!=0
            res = res * x;
 
        // n must be even now
        y = y>>1; // y = y/2
        x = x * x; // Change x to x^2
    }
    return res;
}
 
// Driver program to test above functions
int main()
{
    int x ;
    unsigned int y ;
    cin>>x>>y;
    printf("Power is %d", power(x, y));
 
    return 0;
}

