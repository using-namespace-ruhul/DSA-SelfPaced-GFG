#include<bits/stdc++.h>
 
using namespace std;

//Naive approach: TC = O(n^2)
void moveZero(int arr[], int n){
  for(int i=0; i<n; i++){
      if(arr[i]==0){
        for(int j=i+1; i<n; j++){
            if(arr[j]!=0){
                swap(arr[i],arr[j]);
            }
        } 
      }
  }
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
 
int main(){
int arr[10],n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Previously:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
    cout<<"Now:"<<endl;
    moveZero(arr, n);
 
return 0;
}