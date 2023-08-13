/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    int i,j;
    if (n>0) {
        char **answer=(char **)malloc(n*sizeof(char *));
        
        for(i=0;i<n;i++){
            answer[i]=(char *)malloc(100*sizeof(char));
            j=i+1;
            if(j%3==0 || j%5==0){
                if(j%3==0 && j%5==0){
                    strcpy(answer[i],"FizzBuzz");
                    continue;
                }
                 if(j%3==0 && j%5!=0){
                    strcpy(answer[i],"Fizz");
                    continue;
                }
                strcpy(answer[i],"Buzz");

            }else {
                char str1[10];
                sprintf(str1, "%d", i+1);
                strcpy(answer[i],str1);
            }
        }
        *returnSize=n;
        return answer;
    } else {
        printf("n should be greater than 0");
        return NULL;
    }
}
