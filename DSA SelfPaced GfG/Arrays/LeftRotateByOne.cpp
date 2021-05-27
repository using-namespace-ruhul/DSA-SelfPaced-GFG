#include<bits/stdc++.h>
 
using namespace std;

void moveByOneToLeft(int arr[], int n){
    int var = arr[0];
    for(int i=0; i<n;i++){
        swap(arr[i],arr[i+1]);
    }
    arr[n-1]=var;
        cout<<endl;
    cout<<"After rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    int arr[100000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Befor rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    moveByOneToLeft(arr,n);

 
return 0;
}