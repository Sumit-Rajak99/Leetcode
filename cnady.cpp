#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> candyType = {1, 1, 2, 2, 3, 3};

    
    unordered_set<int> unique(candyType.begin(), candyType.end());

    
    int result = min((int)unique.size(), (int)candyType.size() / 2);

    cout << result << endl; 

    return 0;
}
