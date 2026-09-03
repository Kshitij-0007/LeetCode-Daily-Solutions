class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        int len=nums.length;
        for(int x:nums)
        {
            map.put(x,map.getOrDefault(x,0)+1);
        } 
        for(int x:nums)
        {
            if(map.get(x)>len/2)
            {
                return x;
            }
        }
        return -1;
    }
}