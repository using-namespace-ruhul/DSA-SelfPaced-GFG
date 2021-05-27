#include<bits/stdc++.h>
 
using namespace std;

//counting digits of a number


/*
int main(){
//optimisedA S=O(1), T=O(n)

int n,count;
cin>>n;
count = floor(log10(n)+1);//log10 for log base 10 & log for base e.
cout<<count;


//optimisedB 
 
return 0;
}
*/

/*
//naive S=O(1), T=O(d) d=no. of digits
 
int count( int n){
    int c=0;
    while(n>0){
        n/=10;
        c++;
    }
 
return c;
}

int main(){
    int x;
    cin>>x;
    cout<<count(x);

return 0;
}
*/


//recursive approach S=O(d) , T=O(log10(n))

int count( int n){
    if (n==0)
    return 0;

    return (1 + count(n/10));
}

int main(){
    int x;
    cin>>x;
    cout<<count(x);

    return 0;
}