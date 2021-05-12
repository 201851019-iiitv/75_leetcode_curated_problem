class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       
        int n=nums.size(),v;
        
        unordered_map<int,int>m;
        // store map value and indexs of occurance.
        
        for(int i=0;i<n;i++)
        {
             
          v=target-nums[i];
          
        
          if(m[v])
          {
              return {m[v]-1,i};
          }
            
            m[nums[i]]=i+1;
            
        }
        
        
        
        
        return {-1,-1};
        
    }
};