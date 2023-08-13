int countPrimes(int n){
    if (n<=1)
        return 0;
    int count=0, arr[n];
    int j=1;
    for (int i=0;i<n;i++){
        arr[i]=j++;
    }
    for(int i=2;i*i<n;i++){
        if(arr[i]!=-1){
            for(int j=i*i;j<n;j+=i){
                    arr[j]=-1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if (arr[i]!=-1)
            count++;
    }
    return count;
}
