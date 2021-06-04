#include<bits/stdc++.h>
 
using namespace std;

//Naive solution:
/*
int max_circular(int arr[], int n){
    int res = arr[0];//Initializing the res as the 1st element of the array.
    for(int i=0; i<n; i++){//Traversing through every element of the array to calculate every sub array including the circular ones starting from that element.(arr[i])
        int curr_sum = arr[i];//Initializing current sum as the current element.
        int curr_max = arr[i];//initializing current max also that element.
        for(int j=1; j<n; j++){//ecluding the current i there are n-2 elements are left to take as the syb array so run the loop upto n-2.
            int index = (i+j)%n;//in order to connect the last and firts element of the array.
            curr_sum +=arr[index];//adding all the values of the one after one.
            curr_max = max(curr_max, curr_sum);//taking the maximum all the sums of all the sub array sums starting from current arr[i].
        }
    res = max(res,curr_max);//taking the maximum of all the subarrays including the circular ones.
    }
return res;
}*/

int max_Normal_Sub(int arr[], int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding+arr[i], arr[i]);
        res = max(res,maxEnding);
    }
return res;
}//function for calculating the max sum of normal subarrays.

int max_circular(int arr[], int n){
 if(max_Normal_Sub(arr,n)<0)//if every element of the array is negative.
    return max_Normal_Sub(arr,n);//then this will return the maximum of all the negative elements. Without this if condition we would have gotten the max overall sum as 0 for a negative array. 
     int res_min = arr[0];
     int minEnding = arr[0];
     for(int i=1; i<n; i++){
         minEnding = min(minEnding+arr[i], arr[i]);
         res_min = min(res_min,minEnding);
     }//minimum sum of normal subarray
     int total_sum = arr[0];
     for(int i=1; i<n; i++){
        total_sum += arr[i];
     }//total sum of the array
     int only_Circular = (total_sum - res_min);//max sum of only the circular subarray excluding the normal subarray
     int normal_sub_max = max_Normal_Sub(arr,n);//maximum sum of normal subarray
     int all_over_max = max(normal_sub_max,only_Circular);//taking the maximum of the normal subarray b/w the circular subarray.
return all_over_max;
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
    cout<<"The max circular subarray is: "<<max_circular(arr,n); 
 
return 0;
}
