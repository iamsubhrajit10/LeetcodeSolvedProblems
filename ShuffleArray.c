


typedef struct {
  int arrShuffled[50];
  int arrOriginal[50];
  int upper;
} Solution;


Solution* solutionCreate(int* nums, int numsSize) {
    Solution *obj=(Solution *)malloc(sizeof(Solution));
    obj->upper=numsSize;
    for(int i=0;i<numsSize;i++){
        obj->arrOriginal[i]=obj->arrShuffled[i]=nums[i];
    }
    return obj;
}

int* solutionReset(Solution* obj, int* retSize) {
  *retSize=obj->upper;
   return obj->arrOriginal;
}

int* solutionShuffle(Solution* obj, int* retSize) {  
  int randIndex;
  for(int i = obj->upper - 1; i >= 0; i--) {
      randIndex = rand() % (i + 1);
      
      // Swap elements
      int temp = obj->arrShuffled[i];
      obj->arrShuffled[i] = obj->arrShuffled[randIndex];
      obj->arrShuffled[randIndex] = temp;
  }  
  *retSize = obj->upper;
  return obj->arrShuffled;
}

void solutionFree(Solution* obj) {
    free(obj);
}

/**
 * Your Solution struct will be instantiated and called as such:
 * Solution* obj = solutionCreate(nums, numsSize);
 * int* param_1 = solutionReset(obj, retSize);
 
 * int* param_2 = solutionShuffle(obj, retSize);
 
 * solutionFree(obj);
*/
