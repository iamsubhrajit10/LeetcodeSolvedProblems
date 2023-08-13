int maxProfit(int* prices, int pricesSize){
    int maxProfit=0, minPrice=prices[0];
    for(int i=1;i<pricesSize;i++){
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }
        if(prices[i]-minPrice>maxProfit){
            maxProfit=prices[i]-minPrice;
        }
    }
    return maxProfit;
}
