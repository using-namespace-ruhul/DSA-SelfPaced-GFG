#include<bits/stdc++.h>
 
using namespace std;

/*
//By 2 traversels of the array: TC = O(2n)
int getLargest(int arr[], int n){
    int max = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[max]){
            max = i;
        }
    }
    return max;
}

int secondLargest(int arr[], int n){
    int largest = getLargest(arr, n);
    int res = -1;//assuming there are no second largest i.e. every element is same.

    for (int i=0; i<n; i++){
        if(arr[i]!=arr[largest]){//To check if the element is same as the largest .
            if(res == -1){//If the element isnt same as the largest then make the 1st element that comes into this condition, the 2nd largest.
                res = i;
            }
            else if(arr[i]>arr[res]){//If the current largest is greater than the previous 2nd largest.
                res = i;
            }
        }
    }
return res;
}



int main(){
   int arr[10000],n;
   cin>>n;
   for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"\n";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"The index of the 2nd largest element is: "<<secondLargest(arr,n);
 
return 0;
}
*/

//By 1 traversal only, TC = O(n);

int getSecondLargest(int arr[], int n){
    int largest = 0, res = -1;//res will remain -1 if there is no 2nd largest i.e all the elements are same.
    for(int i=1; i<n; i++){
        if(arr[i]>arr[largest]){
            res = largest;//1st updating the prev largest as 2nd largest.
            largest = i;//then making the new one as largest.
        }
        else if(arr[largest]!= arr[i]){
            if( arr[i]>arr[res] || res==-1 ){//if the new is > 2nd largest or all the element before i were the same.i.e all them were largest.
                res = i;
            }//we are ignoring the condition for arr[i] <= the prev 2nd largest since that means we already got the 2nd largest.
        }//we are ignoring the condition for arr[i] == the prev largest.
    }
return res;
}
 
int main(){
int arr[10000],n;
   cin>>n;
   for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<"\n";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"The index of the 2nd largest element is: "<<getSecondLargest(arr,n);
 
return 0;
}