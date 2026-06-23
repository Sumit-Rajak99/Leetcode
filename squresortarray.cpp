#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
	vector<int>ans;

	for(int i=0;i<nums.size();i++){
		ans.push_back(nums[i]*nums[i]);
	}
	sort(ans.begin(),ans.end());

	cout<<"sorted array";

	for(int i=0;i<nums.size();i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
return 9;
}
