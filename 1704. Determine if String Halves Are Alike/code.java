class Solution {
    public boolean halvesAreAlike(String s) {
        int size=s.length();
        int c=0;
        int mid=size/2;
        for(int i=0;i<mid;i++)
        {
            if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'||
               s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U')
            {
                c++;
            }
        }
        for(int i=mid;i<size;i++)
        {
            if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'||
               s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U')
            {
                c--;
            }
        }
        if(c==0)
        {
            return true;
        }
        return false;
    }
}
