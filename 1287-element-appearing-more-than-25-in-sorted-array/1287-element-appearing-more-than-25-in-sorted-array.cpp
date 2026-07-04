class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>freq;
        for(int i:arr)
        {
            freq[i]++;
        }
        int size=arr.size();
        int maxAppear=0;
        for(auto it: freq)
        {
            if(it.second>size/4)
            {
                return it.first;
            }
        }
        return maxAppear;
    }
};