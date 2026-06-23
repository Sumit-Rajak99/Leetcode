#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12}; 
    int target = 9; 

    int left = 0;
    int right = nums.size() - 1;
    int result = -1; 

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid; 
            break;
        }
        else if (nums[mid] < target) {
            left = mid + 1; 
        }
        else {
            right = mid - 1; 
        }
    }

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
