class Solution {
public:
    bool validPalindrome(string s) {
        int start=0 , end=s.length()-1;
        int count1=0 , count2=0;
        
        
//         REMOVING THE 'C' from ACBA ie. removing an elem from start
        while(start<end)
        {
            if(s.at(start)==s.at(end))
            {
                start++;
                end--;
            }
            else
            {
                start++;
                count1++;
            }
        }
        
//       REMOVING THE 'C' from ABCA ie. removing an elem from end
        start=0 ; end=s.length()-1;
        while(start<end)
        {
            if(s.at(start)==s.at(end))
            {
                start++;
                end--;
            }
            else
            {
                end--;
                count2++;
            }
        }
        
//      IF ANY ONE IS REMOVED OR NOTHING REMOVED SO TRUE
        if(count1==1 or count2==1)return true;
        if(count1==0 or count2==0)return true;
        
        else return false;
        
    }
};
