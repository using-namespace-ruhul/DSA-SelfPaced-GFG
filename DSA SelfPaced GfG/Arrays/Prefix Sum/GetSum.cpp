#include<bits/stdc++.h>
 
using namespace std;

/*
//Naive approach:TC = O(n), SC = O(1).
int prefix_sum(int arr[], int l, int r){
    int sum = 0;
    for(int i=l; i<=r; i++){
        sum+=arr[i];
    }
return sum;
}*/

int prefix_sum[10000]; 

void preSum(int arr[], int n)//calculating the sum till each index of the array and storing it in the corresponding indices of the prefix sum array. 
{
	prefix_sum[0] = arr[0];
	for(int i = 1; i < n; i++)
	{
	   prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}		
}

int getSum(int prefixSum[], int l, int r)
{
	if(l != 0)
		return prefixSum[r] - prefixSum[l - 1];
	else
		return prefixSum[r];
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
    preSum(arr, n);//getting access to the prefix sum array by calling it.
    int l,r;
    cin>>l>>r;
    cout<<"The sum from "<<l<<" to "<<r<<" is : "<<getSum(prefix_sum,l,r);

 
return 0;
}