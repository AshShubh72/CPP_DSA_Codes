#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateRight(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;   // handle cases where k > n

        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            int newIndex = (i + k) % n;   // RIGHT ROTATION formula
            temp[newIndex] = nums[i];
        }

        nums = temp; // copy back
    }
};

int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k for right rotation: ";
    cin >> k;

    Solution obj;
    obj.rotateRight(nums, k);

    cout << "Array after right rotation: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
