#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findMissing(vector<int>& nums, int n) {
    sort(nums.begin(), nums.end());

    vector<int> missing;
    int expected = 0;

    for (int i = 0; i < nums.size(); i++) {
        while (nums[i] > expected) {
            missing.push_back(expected);
            expected++;
        }
        expected++;
    }

    while (expected <= n) {
        missing.push_back(expected);
        expected++;
    }

    return missing;
}

int main() {
    vector<int> nums = {0, 2, 4};
    int n = 4;

    vector<int> result = findMissing(nums, n);

    cout << "Missing numbers: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
