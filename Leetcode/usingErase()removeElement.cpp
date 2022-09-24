class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            auto it = nums.begin()+i;
            if(nums[i] == val){
                nums.erase(it);
                i--;
            }
        }
        return nums.size();
    }
};
