class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0,k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k+=1;
            }
        }
        return k;
    }
};