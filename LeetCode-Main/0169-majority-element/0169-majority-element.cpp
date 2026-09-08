class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int temp = nums[0];
        int size = nums.size();
        for (size_t i = 1; i < size; ++i) {
            if (temp == nums[i]) {
                count++;
            }
            else {
                if (count == 0) {
                    temp = nums[i];
                }
                else {
                    count--;
                }
            }
        }
        return temp;
    }
};
