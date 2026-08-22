class Solution {
    public static int sumOfParam(int n)
    {
        String num=Integer.toString(n);
        int Dsum=0;
        for(char c:num.toCharArray())
        {
            Dsum+=Integer.parseInt(String.valueOf(c));
        }
        int Dprod=1;
        for(char c:num.toCharArray())
        {
            Dprod*=Integer.parseInt(String.valueOf(c));
        }
        return Dsum+Dprod;
    }
    public boolean checkDivisibility(int n) {
        return n%sumOfParam(n)==0;
    }
}