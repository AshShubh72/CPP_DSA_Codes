#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateLeft(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;   // handle large k

        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            int newIndex = (i - k + n) % n;
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

    cout << "Enter k for left rotation: ";
    cin >> k;

    Solution obj;
    obj.rotateLeft(nums, k);

    cout << "Array after left rotation: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


// void rotateLeft(vector<int>& nums, int k) {
//     int n = nums.size();
//     k = k % n;

//     reverse(nums.begin(), nums.begin() + k);
//     reverse(nums.begin() + k, nums.end());
//     reverse(nums.begin(), nums.end());
// }
