class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int n=arr.size();
         if(n==0)
            return 0;
       
        int i=1;
       int buyprice=arr[0];
       int sellprice=0;
        
        int profit=0;
        
        
        
    for(i=1;i<n;i++)
    {
        if(arr[i]<buyprice)
            buyprice=arr[i];
        

        profit=max(profit,arr[i]-buyprice);
        
    }
        
    
        return profit;
    }
};