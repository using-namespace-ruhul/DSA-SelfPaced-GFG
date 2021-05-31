#include<bits/stdc++.h>
 
using namespace std;
//arr[] = {1 5 3 8 12}
//         s=0      e=4

int price_of_stock(int price[], int start, int end){
    if(end<=start)//if there is only one element in the array. or it goes to the negative index.
    return 0;//Base case.
    int profit = 0;//initializing profit as 0 since if the array is sorted in increasing order.
    for(int i=start; i<end; i++){
        for(int j=i+1; j<=end; j++){
            if(price[j]>price[i]){
               int curr_profit = price[j]-price[i]//profit b/w the pairs. then taking all such pairs in both the sides by recursion and adding them up.
               +price_of_stock(price,start,i-1)//recursive call for left side. to check the profit in the left.
               +price_of_stock(price,j+1,end);//recursive call for left side. to check the profit in the left.
               profit = max(profit,curr_profit);//taking the maximum of them.
            }
        }
    }
return profit;
}

int main(){
    int n;
    cin>>n;
    int price[n];
    for(int i=0; i<n; i++){
        cin>>price[i];
    }
    cout<<endl;
    cout<<"The prices are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<price[i]<<" ";
    }
    cout<<endl;
    cout<<"Max profit is: "<<price_of_stock(price,0,n-1);
    
 
return 0;
}