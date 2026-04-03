class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //vector<int>hash;
        unordered_map<int,int>freq;
        
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>>vec;
        for(auto x: freq){
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),[](auto &a, auto &b){
            return a.second>b.second;
        });
        vector <int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
