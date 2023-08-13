int missingNumber(int* nums, int numsSize){
    long int totalSum=numsSize*(numsSize+1)/2;
    for(int i=0;i<numsSize;i++){
        totalSum-=nums[i];
    }
    return totalSum;
}
