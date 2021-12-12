class Solution {
    solve(nums) {
        nums.sort((a,b) => { return a - b});
        return nums[0] * nums[1] > 
        nums[nums.length - 1] * nums[nums.length - 2] ? 
        nums[0] * nums[1] : nums[nums.length - 1] * nums[nums.length - 2];
    }
}