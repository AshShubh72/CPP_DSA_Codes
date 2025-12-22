#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissing(vector<int>& nums, int n) {
    unordered_set<int> s(nums.begin(), nums.end());
    vector<int> missing;

    for (int i = 0; i <= n; i++) {
        if (s.find(i) == s.end()) {
            missing.push_back(i);
        }
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
