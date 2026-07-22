class Solution {
public:

    void reverseArr(vector<int>& arr,int start,int end)
    {
        if(start==end)
            return;
        while(start<end)
        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start+=1;
            end-=1;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        k=k%size;
        reverseArr(nums,0,size-1);
        reverseArr(nums,0,k-1);
        reverseArr(nums,k,size-1);
    }
};