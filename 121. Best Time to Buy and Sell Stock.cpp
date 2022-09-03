class Solution {
public:
    int maxProfit(vector<int>& prices) {
//      We define maxPro and minPrc
        int maxPro = 0;
        int minPrc = prices[0];
       
     
        for(int i=0;i<prices.size();i++)
        {
            minPrc = min(minPrc ,prices[i]);              //we traverse and check the minPrice throughout the vector
            maxPro = max(maxPro , prices[i]-minPrc);      //Calculate maxPro by collecting max or diff between the current val and minPrc.
        }
        return maxPro;
    }
};
