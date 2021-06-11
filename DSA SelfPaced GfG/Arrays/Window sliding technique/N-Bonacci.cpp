#include<bits/stdc++.h>
 
using namespace std;

/*
//Naive approach: TC = O(m*n), SC = O(m) 
void nBonacci( int n, int m){
     int arr[100000]={0};//initializing the entire array as 0.
     arr[n-1]=1;//Initializing the nth term as 1.
     int sum;
     for(int i=n; i<m; i++){
           sum = 0;
           for(int j=i-n; j<i; j++){
                  arr[i]+=arr[j];
           }
     }
     //displaying the numbers.
     for(int i=0; i<m; i++){
           cout<<arr[i]<<" ";
     }
}*/

//efficient approach:
void nBonacci( int n, int m){
      int arr[100000]={0};
      arr[n-1]=1;
      arr[n]=1;
      for(int i=n+1; i<m; i++){
            arr[i] = 2*arr[i-1]-arr[i-n-1];//pattern that was found.
      }

      for(int i=0; i<m; i++){
            cout<<arr[i]<<" ";
      }
}
 
int main(){
    int n, m;
    cin>>n>>m;
    nBonacci(n, m); 
 
return 0;
}