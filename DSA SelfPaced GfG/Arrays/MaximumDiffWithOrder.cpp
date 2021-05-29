#include<bits/stdc++.h>
 
using namespace std;

//Naive approach: O(n^2).
/*
int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            res = max(res,arr[j]-arr[i]);
            }
        }
    }
    return res;
}

int main(){
int arr[100000], n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"\n";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Max difference is: "<<maxDiff(arr,n);
 
return 0;
}*/

//efficient approach: TC = O(n)

int maxDiff(int arr[], int n){
    int res = arr[1]-arr[0], min_Val=arr[0];//Initializing the diff of the 1st and the 2nd element as the maximum and the first element as the minimum value.  
    for(int j=1; j<n; j++){//running the loop only for the values of j and substracting hte minimum value from it.
        res = max(res,arr[j]-min_Val);//considering the maximum b/w the prev max diff and the diff b/w the current arr[j] and current min_Val.
        min_Val = min(min_Val, arr[j]);//for keeping track of the most minmum value so far.
    }

return res;     
}
 
int main(){
int arr[100000], n;
cin>>n;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"\n";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"Max difference is: "<<maxDiff(arr,n);
 
return 0;
}
