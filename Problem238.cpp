class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        long long mul=1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            
               if(nums[i]!=0)
                   mul *=nums[i];
               else
                   count++;
            
            
        }
        
        for(int i=0;i<nums.size();i++)
        {
            
               if(nums[i]!=0 && count==0)
                  nums[i]=mul/nums[i];
              else if(nums[i]==0 && count<2)
                  nums[i]=mul;
             else if(nums[i]==0 && count>=2)
                  nums[i]=0;
               else if(nums[i]!=0 &&count>0 )
                   nums[i]=0;
               
            
            
        }
        
        
     return nums;   
        
        
    }
};