class Solution {
public:
    int recurFind(vector<int>& nums,int target,int low,int high)
    {
        if(low>high)
            return -1;

        int mid=(low+ (high-low)/2);
        
        if(low<=high && nums[mid]==target)
            return mid;
        
        if(low<=high && nums[mid]<target)
        {
            return recurFind(nums,target,mid+1,high);
        }
        
        return recurFind(nums,target,low,mid-1);
        
    }
    int search(vector<int>& nums, int target) {
        return recurFind(nums,target,0,nums.size()-1);
    }
};