class Solution {
public:
    int hammingWeight(uint32_t n) {
       
        int count=0;
        
        long v=1;
        for(int i=0;i<32;i++)
        {
            
            if((n&v)!=0)
                count++;
            
            v <<=1;
            
            
            
        }
        
       return count; 
    }
};