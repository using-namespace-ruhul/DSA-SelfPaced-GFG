#include<bits/stdc++.h>
 
using namespace std;

// TC = O(n)
void moveZero(int arr[], int n){
          int count = 0;//To keep track of non zero elements. 
      for(int i=0; i<n; i++){
           if(arr[i]!=0){
              swap(arr[i],arr[count]);//the non zero element will get exchanged by the 1st 0.
              count++;//the index of the 1st zero is arr[count]. Count will only increase if there is a non zero element.
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
