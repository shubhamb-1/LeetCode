class Solution {
public:
    bool canConstruct(string s, string t) {
        unordered_map<int,int> mp;
        for(int i=0;i<t.size();++i)
        {
            ++mp[t[i]];
        }
        for(int i=0;i<s.size();++i)
        {
            --mp[s[i]];
        }
        for(auto u:mp)
        {
            if(u.second<0)
                return false;
        }
        return true;
    }
};
