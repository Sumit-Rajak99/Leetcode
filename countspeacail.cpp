class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<int, long long> left_count, right_count;
        long long count = 0;
        int n = nums.size();
        
        for(int num : nums) right_count[num]++;
        
        for(int j = 0; j < n; j++) {
            right_count[nums[j]]--;
            
            long long left_matches = left_count[2 * nums[j]];   
            long long right_matches = right_count[2 * nums[j]]; 
            
            count = (count + (left_matches * right_matches) % MOD) % MOD;
            
            left_count[nums[j]]++;  
        }
        
        return count;
    }
};
