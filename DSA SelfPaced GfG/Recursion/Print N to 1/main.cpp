#include<bits/stdc++.h>
 
using namespace std;

void Nto1(int n){//TC = O(n), SC = O(n).
      if(n==0)
      return;
      else
      cout<<n<<" ";
      Nto1(n-1);
}

int main(){
   int n;
   cin>>n;
   Nto1(n);
 
return 0;
}