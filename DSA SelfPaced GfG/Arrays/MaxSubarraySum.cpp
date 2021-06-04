#include<bits/stdc++.h>
 
using namespace std;
/*
//Naive solution: TC = O(n^2)
int max_Sub_Sum(int arr[], int n){
    int res = arr[0];//Initializing the maximum subarray sum as the 1st elemet of the array.
    for(int i=0; i<n; i++){//Traversing the array n times.
        int sum = 0;
        for(int j=i; j<n; j++){//and running the loop for all subarrays for all arr[i].
            sum+=arr[j];
            res = max(res,sum);//taking the maximum of all the sums of the current sub array.
        }
    }
return res;
}*/

//efficient solution: using the modified Kadane's algorithm.

int max_Sub_Sum(int arr[], int n){
    int res = arr[0];//initializing res as the 1st element of the array assuming that is the only and largest sum subarray.
    int maxEnding= arr[0];//initializing the maximum ending that we got as the 1st element and then starting traversal from the 2nd element.
    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding+arr[i], arr[i]);//Either we can extend the prev max ending of the subarray by adding the curr arr[i] with it or we can start a new subarray from arr[i] only.
        res = max(res, maxEnding);//taking the maximum of all the sums we got in the traversals.
    }
return res;
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
   cout<<"The maximum subarray sum is: "<<max_Sub_Sum(arr,n);

return 0;
}

