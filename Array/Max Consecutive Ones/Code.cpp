class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for (int i=0; i<nums.size();i++){
            if (nums[i] == 1){
                count = count + 1;
            }
            else{
                count =0;
            }
            maxi=max(maxi,count);
        }
        return maxi;
        
    }
};
