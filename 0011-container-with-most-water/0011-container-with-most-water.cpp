class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVolume=INT_MIN;
        int start=0;
        int end=height.size()-1;
        while(start!=end)
        {
            int smallHeight=min(height[start],height[end]);
            int newVolume = smallHeight * (end-start);
            if(newVolume>maxVolume)
            {
                maxVolume=newVolume;
            } 
            if(height[start]<height[end])
            {
                start++;
            }
            else{
                end--;
            }
        }
        return maxVolume;
    }
};