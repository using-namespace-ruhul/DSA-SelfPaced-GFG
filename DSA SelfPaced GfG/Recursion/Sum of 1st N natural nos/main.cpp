#include<bits/stdc++.h>
 
using namespace std;

int getsum(int num){//TC = O(n), SC = O(n).
      if(num<=1)
      return num;
return num+getsum(num-1);
}
 
int main(){
int n;
cin>>n; 
cout<<getsum(n);
 
return 0;
}