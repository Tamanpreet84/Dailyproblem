class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        for(auto x : nums)
        m[x] ++;

        int ans = 0;

        for(auto x : m)
        {
            if(x.second > n/2)
            ans = x.first;
        }
        return ans;
    }
};