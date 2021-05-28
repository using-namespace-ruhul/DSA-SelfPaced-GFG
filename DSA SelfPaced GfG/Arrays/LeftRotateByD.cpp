#include<bits/stdc++.h>
 
using namespace std;

//Naive approach: TC = O(nd), SC = O(1)
/*
void leftRotateBy1(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n; i++){
        swap(arr[i],arr[i+1]);
    }
    arr[n-1]=temp;
} 

void leftRotateByD(int arr[], int n, int d){
    for(int i=0; i<d; i++){//Calling the left rotate by 1 function d times.
        leftRotateBy1(arr, n);
    }
    cout<<endl;
    cout<<"After rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
 int n,d;
    int arr[100000];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Befor rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    leftRotateByD(arr,n,d);

 
return 0;
}
*/

/*
//Efficient approach: TC = O(n) , SC = O(d);

void leftRotateByD(int arr[], int n, int d){
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i]=arr[i];//1st copying all the d elements that are to be gone to the end of the array.
    }
    for(int i=0; i<(n-d); i++){
        arr[i]=arr[d+i];//then shifting the remaining the elements (n-d) to the left. 
    }
    for(int i=0; i<d; i++){
        arr[n-d+i]=temp[i];//Placing all the elements that were copied 1st to the end of the array accordingly. 
    }
        cout<<endl;
    cout<<"After rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
 
int main(){
    int n,d;
    int arr[100000];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Befor rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    leftRotateByD(arr,n,d);
 
return 0;
}
*/

//More efficient approach: TC = O(n), SC = (1)

void rev(int arr[], int low, int high){
    
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void leftRotateByD(int arr[], int n, int d){
    rev(arr,0,d-1);//1st reverse the d elements.
    rev(arr,d,n-1);//reverse the remaining n-d elements.
    rev(arr,0,n-1);//reverse the entire array to get the desired O/P.
            cout<<endl;
    cout<<"After rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,d;
    int arr[100000];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Befor rotation: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    leftRotateByD(arr,n,d);
 
return 0;
}
