#include<bits/stdc++.h>
 
using namespace std;
/*

//Naive approach: O(n^2).

void leaders(int arr[], int n)
{
    for(int i=0; i<n; i++){
        bool flag = true;//assuming arr[i] is a leader at 1st so making it true.
        for(int j=i+1; j<n; j++){
            if(arr[j]>=arr[i] ){
                flag = false;//if the condition inside if matches then arr[i] is not a leader so make it false.
                break;
            }
        }
        if(flag == true){//only if arr[i] is true print arr[i].
            cout<<arr[i]<<" ";
        }
    }
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
    cout<<"Leaders:"<<endl;
    leaders(arr,n);

 
return 0;
}
*/

//Efficient approach: TC = O(n):
//The leaders will be decreasing in order.


void leaders(int arr[], int n){
    int curr_leader = arr[n-1];
    cout<<curr_leader<<" ";//since the last element is always going to be a leader.
    for(int i=n-2; i>=0; i--){//check from reverse.
        if(arr[i]>curr_leader){//if the arr[i] is greater than the current leader then only print it.
            cout<<arr[i]<<" ";
            curr_leader = arr[i];
        }
    }
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
    cout<<"Leaders:"<<endl;
    leaders(arr,n);

 
return 0;
}

