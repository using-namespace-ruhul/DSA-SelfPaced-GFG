#include<bits/stdc++.h>
 
using namespace std;

void print(int n){//TC = O(n), SC = O(n).
      if(n==0)
      return;
      else
        print(n-1);
       cout<<n<<" ";
}
 
int main(){
   int n;
   cin>>n;
   print(n);

 
return 0;
}