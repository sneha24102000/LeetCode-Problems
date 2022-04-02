class Solution {
public:
    // Time Complexity: O(N)
    // Space Complexity:- O(1)
    bool isPal(int l,int r,string s){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0,r = s.length() - 1;
        while(l<r and s[l]==s[r]){
            l++;r--;
        }
        return isPal(l+1,r,s) or isPal(l,r-1,s);
    }
};