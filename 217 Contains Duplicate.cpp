class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
//       FIRST APPROACH
        unordered_set<int>a;
        
        for(auto val:nums)
        {
            a.insert(val);
        }
        return (a.size()!=nums.size());
        
        
      
//       SECOND APPROACH
        return(nums.size()>set<int>(nums.begin(),nums.end()).size());

    }
    
};
