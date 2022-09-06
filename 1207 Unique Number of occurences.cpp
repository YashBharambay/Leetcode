class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_set<int>s;
        
        for(auto it:arr) ++m[it];
        for(auto p:m)s.insert(p.second);
        
        return m.size()==s.size();
    }
};
