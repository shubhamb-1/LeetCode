class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> mp;
        for(int i=0;i<S.length();++i)
        {
            ++mp[S[i]];
        }
        int cnt=0;
        for(int i=0;i<J.length();++i)
        {
            cnt+=mp[J[i]];
        }
        return cnt;
    }
};
