#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};  

    int maxWater = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        int area = h * w;
        maxWater = max(maxWater, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    cout << "Maximum Water: " << maxWater << endl;

    return 0;
}
