class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low=0;
        int high=nums.size();
        
        while(low<high)
        {
            int mid = (high+low)/2;
            
            if(nums[mid]==target) return mid;
            
            else if(target>nums[mid]) low=mid+1;
            else high=high-1;
        }
        return -1;
    }
};
