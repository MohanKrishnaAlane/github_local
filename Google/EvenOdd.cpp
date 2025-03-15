#include <vector>
#include <algorithm>
#include <iostream>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size(), pivot = -1, l = 0;
    
    // Step 1: Find the first decreasing element from the right
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }
    
    // If the pivot is not -1, find the element to swap with the pivot
    if (pivot != -1) {
        // Step 2: Find the rightmost element greater than the pivot
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                l = i;
                break;
            }
        }
        // Step 3: Swap the pivot with the found element
        std::swap(nums[pivot], nums[l]);
    }
    
    // Step 4: Reverse the suffix
    std::reverse(nums.begin() + pivot + 1, nums.end());
}

int main() {
    std::vector<int> nums = {3,2,1};
    nextPermutation(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
