#include<bits/stdc++.h>
 
using namespace std;
/*
//Naive approach: O(n^2)
int max_Sum_k(int arr[], int n, int k){
    int max_sum = INT_MIN;
    for(int i=0; i<n-k+1; i++){
        int curr_sum = 0;
        for(int j=0; j<k; j++)
        {
            curr_sum += arr[i+j];
        }
        max_sum = max(max_sum,curr_sum);
    }
return max_sum;
}*/

//efficient solution: Window sliding technique. TC = O(n).

int max_sum_k(int arr[], int n, int k){
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum+=arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k; i<n; i++){
       curr_sum+=(arr[i]-arr[i-k]);
       max_sum = max(max_sum,curr_sum);
    }
return max_sum;
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
    int k;
    cin>>k;
    cout<<"Maximum sum of "<<k<<" elements are: "<<max_sum_k(arr,n,k);
 
return 0;
}