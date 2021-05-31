#include<bits/stdc++.h>
 
using namespace std;

//Efficient approach: O(n):
int cons_1(bool arr[], int n){
    int curr_max=0,res=0;//initializing res and current max as 0 as no 1 is there.
    for(int i=0; i<n; i++){
        if(arr[i]&1)//starting to count only if the current arr[i] is 1.
        curr_max++;//counting the no. of consecutive 1s.
        else {//when get a 0.
        res = max(res,curr_max);//comparing and taking the max b/w the current max and the previously max.
        curr_max = 0;//reinitializing current max to 0 to count from start for the next cons. set of 1s(if any).
        }//by keeping track of consecutive 1s.
    }
return res;    
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
cout<<"Max Consecutive 1s is: "<<cons_1(arr,n);
 
return 0;
}