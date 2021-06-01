#include<bits/stdc++.h>
 
using namespace std;
/*
//Naive solution: O(n^2).
int eve_odd(int arr[], int n){
     int res = 1;
     for(int i=0; i<n; i++){
         int curr = 1;
         for(int j=i; j<n; j++){
             if((arr[j]%2==0 &&arr[j+1]%2!=0)||(arr[j]%2!=0 &&arr[j+1]%2==0))
                 curr++;
            else
                break;
            res = max(res,curr);
         }
     }
return res;
}*/

//efficient solution using Kadane's algo.
//TC = O(n).
int amxEvenOdd(int arr[], int n){
    int curr = 1, res = 1;
    for(int i=1; i<n; i++){//starting the loop from 2nd element. everytime we are going to see the subarray having longest eve odd ends with the curr arr[i].
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0)){//checking if the curr arr[i] and the prev alts each other.
        curr++;//increase curr.//extending the prev subarray.
        res = max(res,curr);//Take the max b/w the curr and the prev max res.
        }
        else{
            curr=1;//start counting again for a new sub array.
        }
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
   cout<<"The maximum subarray of alt even odd is: "<<amxEvenOdd(arr,n);
 
return 0;
}