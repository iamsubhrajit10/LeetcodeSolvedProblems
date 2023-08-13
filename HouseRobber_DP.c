int rob(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;  // No houses to rob
    } else if (numsSize == 1) {
        return nums[0];  // Only one house to rob
    }
    
    // Create an array to store the maximum money that can be robbed up to the i-th house
    int dp[numsSize];
    
    // Base cases for the first two houses
    dp[0] = nums[0];
    dp[1] = fmax(nums[0], nums[1]);
    
    // Iterate through the rest of the houses
    for (int i = 2; i < numsSize; i++) {
        // Choose the larger between robbing the current house and not robbing it
        dp[i] = fmax(dp[i - 1], dp[i - 2] + nums[i]);
    }
    
    return dp[numsSize - 1];
}
