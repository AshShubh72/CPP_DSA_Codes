#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;
                if (currentCount > maxCount) {
                    maxCount = currentCount;
                }
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << "Maximum consecutive ones: "
         << obj.findMaxConsecutiveOnes(nums);

    return 0;
}

