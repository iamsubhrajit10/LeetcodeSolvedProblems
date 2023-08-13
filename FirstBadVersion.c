// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
int binarySearch(int left, int right){
    int result=-1;
    int mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if (isBadVersion(mid)){
            result=mid;
            right=mid-1;
        } else{
            left=mid+1;
        }
    }
    return result;
}
int firstBadVersion(int n) {
    return binarySearch(1,n);
}
