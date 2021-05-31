#include<bits/stdc++.h>
 
using namespace std;

int maxProfit(int price[], int n){
    int profit = 0;
    for(int i=0; i<n; i++)
    {
        if(price[i+1]>price[i]){//taking only when its a peak to maximize the profit.
            profit += price[i+1]-price[i];//taking all the profits and adding them up one by one.
        }//cumulative difference i.e. when something goes up - up - up just keep on adding the diff to get the max diff i.e. profit in this case. 
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
    cout<<"Max profit is: "<<maxProfit(price,n);
 
return 0;
}