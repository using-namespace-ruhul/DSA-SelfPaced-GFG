#include<bits/stdc++.h>
 
using namespace std;

//Recursive approach:TC = O(d) , SC = O(d), d=no. of digits
/*
int getSumOfDigits(int n){
      if(n%10==n)
      return n;
return getSumOfDigits(n/10)+n%10;
}
*/

//Iterative approach:
int getSumOfDigits(int n){
      int res = 0;
      while(n>0){
            res = res + n%10;
            n/=10;
      }
return res;
}

int main(){
int n;
cin>>n;
cout<<getSumOfDigits(n);
 
return 0;
}