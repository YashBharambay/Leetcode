class Solution {
public:
    int romanToInt(string s) {
        
        map<char , int>roman = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}    };
        
        
        int num,sum=0;
        int len = s.length();
        for(int i=0;i<len; )
        {
            if(i==len-1 || (roman[s[i]] >= roman[s[i+1]]))
            {
             num = roman[s[i]];
             i++;
            }
            
            else
            {
                num = roman[s[i+1]] - roman[s[i]];
                i+=2;
            }
            sum=sum+num;
        }
        return sum;
        
    }
};
