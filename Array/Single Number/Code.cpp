class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xxorr=0;
        for (int i=0; i<n; i++){
            xxorr=xxorr^nums[i];
        }
        return xxorr;
    }
};
