#include<bits/stdc++.h>
 
using namespace std;

void Flips(bool arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){//Checking for a new group.
            if(arr[i]!=arr[0])//checking if that group is the second group/has same vals as the second group.
            cout<<"From"<<i<<"to";//from that element
            else
            cout<<i-1<<endl;//until it finds another group which vals are same as the 1st group.
        }
    }
    if(arr[n-1]!=arr[0])//if there is a last group at the end containing one distinct element and it is of the same val as the second group.
    cout<<n-1<<endl;
}
 
int main(){
int n;
cin>>n;
bool arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<endl;
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
Flips(arr,n);
 
return 0;
}