class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size();
        end--;
        char t;
        while(start<end)
        {
            t=s[start];
            s[start]=s[end];
            s[end]=t;
            start++;
            end--;
        }
    }
};
