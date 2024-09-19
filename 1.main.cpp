class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int val1 = nums[i];
            int val2= target - val1;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == val2) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
    return res;
    }
};   
 
