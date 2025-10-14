#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 5, 7, 8, 9, 2, 3, 4, 3, 1};
    int k = 3;
    int n = nums.size();

    vector<bool> inc(n, false);

    // Step 1: Find strictly increasing subarrays of length k
    for (int i = 0; i + k <= n; i++) {
        bool ok = true;
        for (int j = i; j < i + k - 1; j++) {
            if (nums[j] >= nums[j + 1]) {
                ok = false;
                break;
            }
        }
        if (ok) inc[i] = true;
    }

    // Step 2: Check for two adjacent strictly increasing subarrays
    bool found = false;
    for (int i = 0; i + 2 * k <= n; i++) {
        if (inc[i] && inc[i + k]) {
            found = true;
            break;
        }
    }

    // Step 3: Output result
    if (found)
        cout << "true";
    else
        cout << "false";

    return 0;
}
