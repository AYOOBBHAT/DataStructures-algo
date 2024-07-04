//leetcode 121
#include<bits./stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Max_profit=0;
        
        int min_price=prices[0];
        for(int i=1;i<prices.size();i++){
          int  cost=prices[i]-min_price;
           Max_profit=max(Max_profit,cost);
           min_price=min(min_price,prices[i]);


        }
        return Max_profit;
        
    }
};