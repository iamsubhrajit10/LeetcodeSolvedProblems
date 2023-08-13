int climbStairs(int n){
    long int possibleSteps=0;
    if (n==1)
        return 1;
    long int a=1, b=2,c;
    for (int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
