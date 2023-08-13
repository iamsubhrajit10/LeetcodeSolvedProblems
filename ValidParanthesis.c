void push(char *stack, int *top, char element,int size){
    if(*top==size)
        return;
    stack[(*top)++]=element;
}
char pop(char *stack, int *top){
    if(*top==0)
        return '-';
    return stack[--(*top)];
}

bool isValid(char * s){
    int size=strlen(s);
    char *stack=(char *)malloc((size+1)*sizeof(char));
    int top=0;
    for(int i=0;i<size;i++){
        if(s[i]=='('|| s[i]=='{'|| s[i]=='[')
            push(stack,&top,s[i],size);
        else{
            switch(s[i]){
                case ')':
                    if (pop(stack,&top)!='('){
                        free(stack);
                        return false;
                    }
                    break;
                case '}':
                    if (pop(stack,&top)!='{'){
                        free(stack);
                        return false;
                    }
                    break;
                case ']':
                    if (pop(stack,&top)!='['){
                        free(stack);
                        return false;
                    }
                    break;
                default:
                    free(stack);
                    return false;
            }
        }
    }
    if (top==0){
        free(stack);
        return true;
    }
    free(stack);
    return false;
}
