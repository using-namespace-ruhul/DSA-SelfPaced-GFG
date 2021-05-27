#include<bits/stdc++.h>
 
using namespace std;

bool palindrome( int n ){
    int temp, rev = 0, rem;
    temp = n;

    while(temp>0){
    rem = temp%10;
    rev = (rev*10) + rem;
    temp/=10;
    }

return (n==rev);
}
 
int main(){
    int x,res;
    cin>>x;
    if((bool)palindrome(x)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

 
return 0;
}
//TC is O(d) where d is no of digits in the number.