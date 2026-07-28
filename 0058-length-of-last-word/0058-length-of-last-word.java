class Solution {
    public int lengthOfLastWord(String s) {
        String s1=s.trim();
        int lstLen=0;
        for(int i=s1.length()-1;i>=0;i--)
        {
            if(s1.charAt(i)==' ')
                return lstLen;
            lstLen++;
        }
        return lstLen;
    }
}