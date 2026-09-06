class Solution {
    public boolean isMiddleElementUnique(int[] nums) {
        HashMap<Integer, Integer> freq = new HashMap<>();
        for(int num :nums) 
        { 
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        } 
        int middle = nums[nums.length / 2];

        return freq.get(middle) == 1;
    }
}