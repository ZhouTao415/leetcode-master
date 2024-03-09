// Runtime Complexity
// Space Complexity: logn
// The array is sorted in ascending order.
#include <stdio.h>
#include <iostream>
#include <vector>

// while 要满足合法区间
// [left, right] -> [1, 1]
// [left, right) -> [1, 2)

// Method 1: [left, right] -> [1, 1]

class Solution1 {
public: 
    int search(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int middle = left + ((right - left) >> 1);

            if (nums[middle] > target) {
                right = middle - 1;
            } else if (nums[middle] < target) {
              left = middle + 1;  
            } else {
                return middle;
            }
        }
        return -1;
    }
};

class Solution2 {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right)
        {
            int middle = left + ((right - left) >> 1);
            if (nums[middle] > target) {
                right = middle;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                return middle;
            }
        }
        return -1;       
    }
};

int main(int argc, char const *argv[])
{
    int n, target;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    std::cout << "Enter target value: ";
    std::cin >> target;

    Solution1 solution1;
    Solution2 solution2;

    int result1 = solution1.search(nums, target);
    int result2 = solution2.search(nums, target);

    std::cout << "Solution1 found at index: " << result1 << std::endl;
    std::cout << "Solution2 found at index: " << result2 << std::endl;

    return 0;
}
