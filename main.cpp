#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
class Solution2 {
public:
    bool isPalindrome(int x) {
        vector <int> reverses;
        vector <int> primary;
        bool result;
        while (x > 0)
        {
            int digit = x%10;
            x /= 10;
            primary.push_back(digit);
            reverses.push_back(digit);
        }
        reverse(reverses.begin(), reverses.end());
        if (reverses ==  primary) {
            result = true;
        }
        if (reverses !=  primary) {
            result = false;
        }
        if (x < 0) {
            result = false;
        }
        return result;
    }
};

int main() {

};
