#include<bits/stdc++.h>
 
using namespace std;

//My code: TC = O(n).
/*
void arrRev(int arr[], int n){
    int temp;
            if(n%2==0){
        for(int i=0, j=n-1; i<=(n/2), j>=(n/2); i++, j-- ){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    else if(n%2!=0){
        for(int i=0, j=n-1; i<=(n/2), j>(n/2); i++,j-- ){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
       cout<<"After reversing:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
 
int main(){
   int arr[100000], n;
   cin>>n;
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   cout<<endl;
   cout<<"Before reversing:"<<endl;
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   arrRev(arr, n);
 
return 0;
}*/

//GFG code: TC = O(n)
void revArr(int arr[], int n){
    int temp;
    int low=0;//Pointing the leftest element.
    int high=n-1;//Pointing the rightest element.
    while(high>low){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
       cout<<"After reversing:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    
}

int main(){
       int arr[100000], n;
   cin>>n;
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   cout<<endl;
   cout<<"Before reversing:"<<endl;
   for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   revArr(arr, n);

return 0;
}