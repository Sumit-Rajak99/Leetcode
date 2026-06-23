#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'j';

    int left = 0;
    int right = letters.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (letters[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    char ans = letters[left % letters.size()];
    cout << "Next greatest letter: " << ans << endl;

    return 0;
}
