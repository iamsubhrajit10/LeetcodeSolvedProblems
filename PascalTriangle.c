/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int **pascal=(int **)malloc(numRows*sizeof(int *));
    *returnColumnSizes=(int *)malloc(numRows * sizeof(int));
    int i=0;
    while(i<numRows){
        pascal[i]=(int *)malloc((i+1)*sizeof(int));
        (*returnColumnSizes)[i]=i+1;
        if(i==0)
            pascal[i][0]=1;
        else{
            int j=0;
            while(j<=i){
                if (j==0 || j==i)
                    pascal[i][j]=1;
                else{
                    pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
                }
                j++;
            }
        }
        i++;
    }
    *returnSize=numRows;
    return pascal;
}
