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