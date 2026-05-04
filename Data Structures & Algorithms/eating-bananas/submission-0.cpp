class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(), piles.end());
        int ans=-1;
        while(l<=r)
        {
            long long int m=l+(r-l)/2;
            long long int hourstaken=0;
            for(long long int pile:piles)
            {
                hourstaken+=(pile-1)/m+1;
            }
            if(hourstaken<=h)
            {
                ans=m;
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return ans;
    }
};
