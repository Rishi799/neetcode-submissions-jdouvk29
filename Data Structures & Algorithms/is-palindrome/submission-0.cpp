class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int a=0;
        int b=n-1;
        while(a<b){
           if(!isalnum(s[a])) { a++; continue; }
           if(!isalnum(s[b])) { b--; continue; }
           if(tolower(s[a])!=tolower(s[b])){
            return false;
           }
            a++;
            b--;
        }
        return true;
    }
};
