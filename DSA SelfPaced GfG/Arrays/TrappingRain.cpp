#include<bits/stdc++.h>
 
using namespace std;
/*
//Naive approach: TC = O(n^2). SC = O(1)
int trap_Water(int arr[], int n){
    int lmax, rmax,res =0;//initializing res as 0 as no water can be trapped in the array.
    for(int i=1; i<n-1; i++){//since at the lmost and the rmost end of it no water can be stored we are ignoring them.
        lmax = arr[i];//initializing lmax as current arr[i].
        for(int j=0; j<i; j++){//traversing from 1st element to the current arr[i] on which how much water can be trapped is to be determined.
           lmax = max(lmax,arr[j]);//taking the max value b/w the curr lmax and the curr arr[j].
        }
        rmax = arr[i];//initializing rmax as current arr[i].
        for(int j=i+1; j<n; j++){//traversing from the current arr[i] on which how much water can be trapped is to be determined to the last element.
            rmax = max(rmax, arr[j]);//taking the max value b/w the curr rmax and the curr arr[j].
        }
        res += min(lmax,rmax)-arr[i];//taking the minmum b/w the lmax and rmax and substracting current arr[i] from it and adding them all up one after one along with the traversel by i.
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
    cout<<"Total amount of water that can be trapped is: "<<trap_Water(arr,n);
 
return 0;
}
*/


//efficient approach: 

int trap_Water(int arr[], int n)
{
    // left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    int left[n];
 
    // Right [i] contains height of tallest bar to
    // the right of ith bar including itself
    int right[n];
 
    // Initialize result
    int water = 0;
 
    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);
 
    // Fill right array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);
 
    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] .
    for (int i = 0; i < n; i++)
        water += min(left[i], right[i]) - arr[i];//same as the previous approach.
 
    return water;
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
    cout<<"Total amount of water that can be trapped is: "<<trap_Water(arr,n);
 
return 0;
}//TC = O(n), SC = O(n)
