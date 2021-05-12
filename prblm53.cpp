class Solution {
public:
    // Dynamic programming  Time Complexity=O(N)and space O(N).
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
       int maxsum[n];
        maxsum[0]=nums[0];
        int k;
        
        int res=maxsum[0];
        for(int i=1;i<n;i++)
        {
           k=nums[i]+maxsum[i-1]; 
            
            maxsum[i]=max(nums[i],k);
            
            res=max(res,maxsum[i]);
                
            
        }
        
        
        
        return res;
    }
};