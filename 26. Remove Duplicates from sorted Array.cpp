class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//             CHECK IF ARRAY IS NULL
        if(nums.empty())
            return 0;
        
// TRAVERSING IN THE ARRAY
        int i=0;
//  WE KEEP THE FIRST ELEM I AND 2ND ELEM AS J and Check if i and j are not equal
//       IF equal then they are left out and if not equal the j value is swapped to the i value so that we get distinct values.
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
        
        
    }
};
