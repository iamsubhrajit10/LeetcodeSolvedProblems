int maxSubArray(int* nums, int numsSize) {
    int maxEndingHere = nums[0];  // Initialize with the first element
    int maxSoFar = nums[0];       // Initialize with the first element
    
    for (int i = 1; i < numsSize; i++) {
        // Choose the larger between the current element and the sum ending at the previous position
        maxEndingHere = (nums[i] > maxEndingHere + nums[i]) ? nums[i] : maxEndingHere + nums[i];
        
        // Choose the larger between the current maximum and the maximum sum found so far
        maxSoFar = (maxEndingHere > maxSoFar) ? maxEndingHere : maxSoFar;
    }
    
    return maxSoFar;
}
