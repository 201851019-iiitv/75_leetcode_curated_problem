class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        int xorv=0;
        int n=nums.size();
        for(int i=1;i<=n;i++)
            xorv ^=i^nums[i-1];
        
        
        
        
        return xorv;
        
    }
};