class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums2.begin(), nums2.end());
        unordered_set<int> visited;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            if(s.count(nums1[i]) && !visited.count(nums1[i])) {
                ans.push_back(nums1[i]);
                visited.insert(nums1[i]);
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
