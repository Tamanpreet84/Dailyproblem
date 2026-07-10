class Solution {
public:
    bool isAnagram(string s, string t) {

         unordered_map<char, int> m;

         for(auto x : s){
            m[x]++;

         }
         for(auto x : t){
            m[x]--;

            if(m[x]==0) m.erase(x);
         }
         return m.empty();
    }
};

         










