#include<bits/stdc++.h>
 
using namespace std;
/*
//Efficient approach: TC = O(n)
int max(int arr[], int n){
    int max = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
    return max;
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
cout<<"The index of the largest element is: "<<max(arr,n);
 
return 0;
}*/

//Naive approach:
#include<bits/stdc++.h>
 
using namespace std;

int getMax(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            if(arr[j]>arr[i]){
            flag = false;
            break;
            }
        }
    if(flag == true)
    return i;
    }
 return -1;//This line will never be executed since we will always have a largest element. Its only there for not getting an error.
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
cout<<"The index of the largest element is: "<<getMax(arr,n);

return 0;
}