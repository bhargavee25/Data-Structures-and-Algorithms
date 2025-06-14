class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0];
        int res=nums[0];
        int n=nums.size();
        for (int i=1; i<n; i++){
            maxsum=max(maxsum+nums[i], nums[i]);
            res=max(res,maxsum);
        }
        return res;
    }
};
