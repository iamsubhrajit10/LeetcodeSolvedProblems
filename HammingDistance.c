int hammingDistance(int x, int y){
    int count=0;
    int xorResult=x^y;
    while(xorResult>0){
        count+=xorResult%2;
        xorResult/=2;
    }
    return count;
}
