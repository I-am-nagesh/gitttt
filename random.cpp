class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int x;
        stack<int> s;
        
        for(int i=prices.size() - 1; i>=0; i--) {
            while(!s.empty() && s.top()>prices[i]) 
			s.pop();
             x = prices[i];
            if(!s.empty()) 
			prices[i] = prices[i] - s.top();
            s.push(x);
        }
        
        return prices;
        }
    
};