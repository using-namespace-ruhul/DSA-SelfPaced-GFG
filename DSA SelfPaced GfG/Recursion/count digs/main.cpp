#include<bits/stdc++.h>
 
using namespace std;

    int countDigits(int n)
    {
         if(n%10==n)
         return 1;
      return 1+countDigits(n/10);
    }

int main(){
cout<<countDigits(1234);
 
return 0;
}