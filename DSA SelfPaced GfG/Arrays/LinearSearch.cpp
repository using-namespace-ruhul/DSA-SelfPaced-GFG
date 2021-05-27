#include<bits/stdc++.h>
 
using namespace std;
//Find the element in the array and return its index. if it is not there then return -1. 
int linearSearch(int arr[], int n, int x)//arr[] is the array, n is its size, x is the element to be searched
{
    for(int i=0; i<n; i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}

int main(){
  int arr[100000], n, x;
  cin>>n>>x;
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }
  if(linearSearch(arr,n,x)==1)
  cout<<x<<" is at arr["<<linearSearch(arr,n,x)<<"]"; 
  else if(linearSearch(arr,n,x)==-1)
  cout<<x<<"is not present in the array";
return 0;
}//TC = O(n).