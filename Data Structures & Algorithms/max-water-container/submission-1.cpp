class Solution {
public:
    int maxArea(vector<int>& heights) {
        //int i=0;
        //int j=h.size();
        int n=heights.size();
        int temp, max_area=0;
        for(int i=0;i<n;i++){
            for(int j = i + 1; j < n; j++){
            int height = min(heights[i], heights[j]);
                int width = j - i;
                int area = height * width;

                max_area = max(max_area, area);
            }
        }
        return max_area;
    }
};
