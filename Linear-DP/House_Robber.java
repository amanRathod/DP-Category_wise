class Solution {
    public int rob(int[] nums) {
         
    if (nums.length == 0) return 0;
    
        int[] memo = new int[nums.length + 1];
    
        memo[0] = 0;
        memo[1] = nums[0];
    
    for (int i = 1; i < nums.length; i++) {
        int val = nums[i];
        memo[i+1] = Math.max(memo[i], memo[i-1] + val); //if ith house is robbed then collect all loot till (i-2)th house . if ith house is not robbed then loot (i-1)th house.
        }
    
        return memo[nums.length];
    }
}
