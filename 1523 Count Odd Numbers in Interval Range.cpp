class Solution {
public:
    int countOdds(int low, int high) {
//         Range is halfed
        int res= (high - low)/2;
        if(high%2!=0 || low%2!=0)
        {
            res++;
        }
        return res;
    }
};
