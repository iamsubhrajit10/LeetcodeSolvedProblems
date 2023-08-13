


typedef struct {
    int stack[30000];
    int top;
    int auxStack[30000];
    int auxTop;
} MinStack;


MinStack* minStackCreate() {
    MinStack *obj= (MinStack *)malloc(sizeof(MinStack));
    obj->top=0;
    return obj;
}

void minStackPush(MinStack* obj, int val) {
  if (obj->top==0){
      obj->stack[obj->top]=obj->auxStack[obj->auxTop++]=val;
  }else{
      obj->stack[obj->top]=val;
      if (val<=obj->auxStack[obj->auxTop-1]){
          obj->auxStack[obj->auxTop++]= val;
      }
  }
    obj->top++;
}

void minStackPop(MinStack* obj) {
    if(obj->top<1)
        return;
    if(obj->stack[obj->top-1]==obj->auxStack[obj->auxTop-1])
        obj->auxTop--;
    obj->top--;
}

int minStackTop(MinStack* obj) {
  return obj->stack[obj->top-1];
}

int minStackGetMin(MinStack* obj) {
  return obj->auxStack[obj->auxTop-1];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
