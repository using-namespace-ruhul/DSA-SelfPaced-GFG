#include<bits/stdc++.h>
 
using namespace std;
/*
//naive solution:TC = O(n^2)
bool if_sum(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        int sumx = 0;
        for(int j=i; j<n; j++){
           sumx+=arr[j];
           if(sumx==sum)
           return 1;
        }
    }
return 0;
}*/
/*//my code.
void if_sum(int arr[], int n, int sum){
    int curr_sum = 0, s=0;//starting pointer
     for(int e=0; e<n; e++)
     {
        curr_sum += arr[e];
        while(curr_sum>sum && s<e){
            curr_sum -= arr[s];
            s++;
        }
        if(curr_sum == sum){
        cout<<"The req subarray is from "<<s<<" to "<<e;
        break;
        }
     }
if(curr_sum != sum)
cout<<"Not present";
}*/

//gfg code TC = O(n)
/* Returns true if the there is a subarray of arr[] with a sum equal to 'sum' 
otherwise returns false. Also, prints the result */
int subArraySum(int arr[], int n, int sum) 
{ 
	/* Initialize curr_sum as value of first element 
	and starting point as 0 */
	int curr_sum = arr[0], start = 0, i; 

	/* Add elements one by one to curr_sum and if the curr_sum exceeds the 
	sum, then remove starting element */
	for (i = 1; i <= n; i++) 
	{ 
		// If curr_sum exceeds the sum, then remove the starting elements 
		while (curr_sum > sum && start < i-1) //in this loop insertion or deletoion of element happens at a time at most once. so this loop doent increases the TC of the outer loop.
		{ 
			curr_sum = curr_sum - arr[start]; 
			start++; 
		} 

		// If curr_sum becomes equal to sum, then return true 
		if (curr_sum == sum) 
		{ 
			printf ("Sum found between indexes %d and %d", start, i-1); 
			return 1; 
		} 

		// Add this element to curr_sum 
		if (i < n) 
		curr_sum = curr_sum + arr[i]; 
	} 

	// If we reach here, then no subarray 
	printf("No subarray found"); 
	return 0; 
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
    int sum;
    cin>>sum;
    subArraySum(arr,n,sum);
 
return 0;
}

