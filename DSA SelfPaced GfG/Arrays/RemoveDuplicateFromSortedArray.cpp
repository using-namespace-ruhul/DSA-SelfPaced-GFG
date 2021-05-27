#include<bits/stdc++.h>
 
using namespace std;
//THIS ONLY WORKS FOR SORTED ARRAYS.
/*
//Naive approach: TC = O(n), SC = 0(n)//since we reqire a duplicate array(extra) to copy.
int removeDuplicate(int arr[], int n){
    int temp[n];
    temp[0]=arr[0];//copying the first element, since it will be distinct. 
    int res = 1;//to identify the current size of the extra array, since only one element is present(copied)
    for(int i=1; i<n; i++){
        if(arr[i] != temp[res-1]){//checking if the prev of the extra  arr is = the current of the original arr.
            temp[res] = arr[i];//if not = then copy the current of the original to current of the extra.
            res++ ;//increasing the extra arr size.
        }
    }
    for(int i=0; i<res; i++){
        arr[i]=temp[i];//copying the extra to the original.
    }
return res;
}

int main(){
    int arr[100000],n;
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
    int N = removeDuplicate(arr, n);
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }

 
return 0;
}
*/

int removeDuplicates(int arr[], int n){
     int res = 1;//since the minimum size can be 1(for arr[]={10,10,10} i.e. same element)
     for(int i=1; i<n; i++){
         if(arr[i]!=arr[res-1]){//(checking the relation b/w current and the previous)if they are equal the loop isnt executed and that value or element is discarded(ignored so and doesnt get copied or updated in the next step) it checks for the next elemnent in the array.
             arr[res] = arr[i];//if they arent equal the current array index's element is updated along with its size which is res.
             res++;//then the is increased.
         }
     }
     return res;

}
 
int main(){
      int arr[100000],n;
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
    int N = removeDuplicates(arr, n);
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
 
return 0;
}//SC = O(1). TC = O(n)