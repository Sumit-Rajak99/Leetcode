class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for (int num : nums) {
            int temp = num;
            int largest = 0;

            
            while (temp > 0) {
                largest = max(largest, temp % 10);
                temp /= 10;
            }

            mp[largest].push_back(num);
        }

        int ans = -1;

        
        for (auto &p : mp) {
            vector<int>& v = p.second;

            if (v.size() < 2) continue;

            
            sort(v.begin(), v.end());

            int sum = v[v.size() - 1] + v[v.size() - 2];
            ans = max(ans, sum);
        }

        return ans;
    }
};
