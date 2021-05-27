#include<bits/stdc++.h>
 
using namespace std;
/*
//Efficient approach: TC = O(n)
bool sortedOrNot(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])//Checking if the current elemet is < the prev one.
        return false;
    }
return true;//This line will never be executed.
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
if(sortedOrNot(arr,n))
cout<<"YES";
else
cout<<"NO";

return 0;
}
*/

//Naive approach:
bool sortedOrNot(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[i])
				return false;
		}
	}

	return true;
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
if(sortedOrNot(arr,n))
cout<<"YES";
else
cout<<"NO";

return 0;
}