class Solution {
public:

    bool check(string &s, int a, int b){
        while(a < b){
            if(s[a] != s[b])
                return false;
            a++;
            b--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int n = s.size();
        int a = 0;
        int b = n - 1;

        while(a < b){

            if(s[a] == s[b]){
                a++;
                b--;
            }
            else{

                if(check(s, a + 1, b))
                    return true;

                if(check(s, a, b - 1))
                    return true;

                return false;
            }
        }

        return true;
    }
};