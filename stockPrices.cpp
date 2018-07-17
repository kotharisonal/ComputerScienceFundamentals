    
   /*
   Say you have an array for which the ith element is the price of a given stock on day i.

  If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

  Note that you cannot sell a stock before you buy one.
    
  */  
    int maxProfit(vector<int>& prices) {
       if(prices.size() == 0)
           return -1;
     int minPrice = prices[0];
     int curProfit;
     int maxProfitSoFar = INT_MIN;   
        
        
        for(int i = 1; i < prices.size(); i++) {
            curProfit = prices[i] - minPrice;
            if (maxProfitSoFar < curProfit)
                maxProfitSoFar = curProfit;
            if(minPrice > prices[i])
                minPrice = prices[i];
        }
        return maxProfitSoFar;
    }
