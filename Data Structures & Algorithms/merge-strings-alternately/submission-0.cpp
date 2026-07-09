class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int l1=word1.size();
        int l2=word2.size();
        int a=0,b=0;
        string ans;
        for(int i=0;i<max(l1,l2);i++){
            if(a<l1){
                ans+=word1[a];
                a+=1;
            }
            if(b<l2){
                ans+=word2[b];
                b+=1;
            }
        }
        return ans;
    }
};