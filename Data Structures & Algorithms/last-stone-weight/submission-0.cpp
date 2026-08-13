class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxh;
        int n=stones.size();
        for(int i=0;i<n;i++){
            maxh.push(stones[i]);
        }
        while(maxh.size()>1){
            int a = maxh.top();
            maxh.pop();
            int b = maxh.top();
            maxh.pop();
            int c;
          if(a!=b){
            maxh.push(a-b);
          }
        }
       return maxh.empty() ? 0 : maxh.top();
    }
};
