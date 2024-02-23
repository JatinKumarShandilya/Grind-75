// leetcode q - 383

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> m;
        for(auto a:magazine){
            m[a-'a']++;
        }
        for(auto a:ransomNote){
            int x = --m[a-'a'];
            if(x<0){
                return false;
            }
        }
        return true;
    }
};