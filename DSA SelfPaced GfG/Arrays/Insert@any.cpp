#include<bits/stdc++.h>
 
using namespace std;
 //Insertig at any position in the array 1st requires some space in the array.i.e, capacity must be greater than current size.
 // First we need to shift all the elements to one by one right side from the desired position then insert the element at that position. 

int insert(int arr[], int n, int x, int cap, int pos){
    if(n==cap)
    return n;
     
    int idx = pos - 1;//index where the element is to be insterted. 
    for(int i = n-1; i>=idx; i++){
        arr[i+1]=arr[i];
    }
    arr[idx] = x;
    return n+1;
}

int main(){
 int arr[10], x, cap = 10, n, pos;
 cin>>n;
 
 for(int i=0; i<n; i++){
     cin>>arr[i];
 }
 cout<<"Before insertion:"<<endl;
 for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
 }
 cout<<endl;
 cin>>x>>pos;

  n = insert(arr, n, x, cap, pos);
 cout<<"After insertion:"<<endl;
 for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
 }

return 0;
}