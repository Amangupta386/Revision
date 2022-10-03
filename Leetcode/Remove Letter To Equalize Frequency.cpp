#define R(i, a, b) for (auto i = (a); i < (b); ++i)
class Solution {
public:
    bool equalFrequency(string word) {
        vector<int>f(26, 0);
    for(auto c: word)
        f[c-'a']++;
    R(i, 0, 26){
        vector<int>temp=f;
        if(f[i] <= 0){
            continue;
        }
        temp[i]--;
        set<int>s;
        for(auto x:temp){
            if(x>0)
                s.insert(x);
        }
        if(s.size() == 1)
            return true;
    }
    return false;
    }
};
