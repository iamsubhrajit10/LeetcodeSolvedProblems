int getVal(char ch){
    int val;
        switch(ch){
        case 'I':
            val=1;
            break;
        case 'V':
            val=5;
            break;
        case 'X':
            val=10;
            break;
        case 'L':
            val=50;
            break;
        case 'C':
            val=100;
            break;
        case 'D':
            val=500;
            break;
        case 'M':
            val=1000;
            break;
        default:
            val=0;
    }
    return val;
}
int romanToInt(char * s){
    int size=strlen(s);
    if (size==0)
        return 0;
    int result=getVal(s[size-1]);
    int currentVal;
    int prevVal=result;
    
    for(int i=size-2;i>=0;i--){
        currentVal=getVal(s[i]);
        if (currentVal<prevVal){
            result-=currentVal;
        }else{
            result+=currentVal;
        }
        prevVal=currentVal;
    }

    return result;

}
