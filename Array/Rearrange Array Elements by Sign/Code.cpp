class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                pos.push_back(nums[i]);
            } else {
                neg.push_back(nums[i]);
            }
        }

        int posId = 0, negId = 0, i = 0;
        while (posId < pos.size() && negId < neg.size()) {
            if (i % 2 == 0) {
                nums[i++] = pos[posId++];
            } else {
                nums[i++] = neg[negId++];
            }
        }
        while (posId < pos.size()) {
            nums[i++] = pos[posId++];
        }
        while (negId < neg.size()) {
            nums[i++] = neg[negId++];
        }

        return nums;
    }
};
