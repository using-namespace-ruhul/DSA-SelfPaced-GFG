#include<bits/stdc++.h>
 
using namespace std;

bool sum_k(int arr[], int n, int k, int x){
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum+=arr[i];
    }
    if(curr_sum == x)
    return 1;
    for(int i=k; i<n; i++){
       curr_sum+=(arr[i]-arr[i-k]);
       if(curr_sum == x)
       return 1;
    }
return 0;
}
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
        for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k,x;
    cin>>k>>x;
    if(sum_k(arr,n,k,x))
    cout<<"YES present";
    else
    cout<<"NOT present";
 
return 0;
}