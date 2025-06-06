class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currmin = nums[0];
        int currmax = nums[0];
        int maxpro = nums[0];
        int n = nums.size();
        for (int i=1; i<n; i++){
            int temp= max({currmin*nums[i],nums[i],currmax*nums[i]});
            currmin= min({currmin*nums[i], nums[i], currmax*nums[i]});
            currmax=temp;
            maxpro=max(currmax,maxpro);
        }
        return maxpro;
    }
};
