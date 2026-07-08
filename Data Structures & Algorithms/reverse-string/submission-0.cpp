class Solution {
public:
    void reverseString(vector<char>& s) {
        int a  =0;
        int n=s.size();
        int b = n-1;
        while(a<b){
            swap(s[a],s[b]);
            a++;
            b--;
        }
       
    }
};