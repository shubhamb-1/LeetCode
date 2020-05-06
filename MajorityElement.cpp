class Solution {
public:
    int majorityElement(vector<int>& n) {
      unordered_map<int,int> mp;
        for(int i=0;i<n.size();++i)
        {
            ++mp[n[i]];
        }
        for(auto u:mp)
        {
            if(u.second>n.size()/2)
                return u.first;
        }
        return 1;
        }
};
