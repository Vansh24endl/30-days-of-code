#include <iostream>
#include <unordered_map>
#include <vector>
Using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> numIndices;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        if (numIndices.find(complement) != numIndices.end()) {
            return {numIndices[complement], i};
        }

        numIndices[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" <<endl;

    return 0;
}
