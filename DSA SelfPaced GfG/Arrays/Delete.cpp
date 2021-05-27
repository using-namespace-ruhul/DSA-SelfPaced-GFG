#include<bits/stdc++.h>
 
using namespace std;
 
int delet(int arr[], int n, int x ){
    int i=0;
    for( i=0; i<n; i++){
        if(arr[i]==x)
        break;
    }
    if(i==n)//If the element is not present in the array.
    return n;
    for(int j=i; j<n; j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main(){
 int arr[100000], n,x;
 cin>>n;

 for(int i=0; i<n; i++)
{
    cin>>arr[i];
} 
 cout<<"Before deletion:"<<endl;
 for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
} 

cout<<endl;
cin>>x;
n = delet(arr, n, x);
cout<<"After deletion:"<<endl;
 for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
} 

return 0;
}//This delete operation only deletes the first occurance of the element.
//TC = O(n)