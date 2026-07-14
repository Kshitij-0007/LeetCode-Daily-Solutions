class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        string nwStr=s.append(s);
        return nwStr.find(goal)!=string::npos;

    }
};