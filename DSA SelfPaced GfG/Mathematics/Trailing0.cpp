#include<bits/stdc++.h>
 
using namespace std;

//Naive approach: SC = for factorials of large nos int cannt contain those.
/*
int countTrailing(int n){
    int f=1;
    for(int i=2; i<=n; i++){
        f = f*i;
    }
    int res=0;
    while(f%10==0){
        res++;
        f/=10;
    }

return res;
}

int main(){
    int x;
    cin>>x;
    cout<<countTrailing(x);

    return 0;
}
*/

//Optimised Approach :

int countTrai(int num){
    int res=0;
    for(int i=5; i<=num; i*=5){
       res = res + (num/i);//it checks how many 5s ,25s ,125s ,625s,....5^k s are present in the number ..i.e the number of trailing zeros. 
       
    }

  return res;
}

int main(){
    int number;
    cin>>number;
    cout<<countTrai(number);


    return 0;
}