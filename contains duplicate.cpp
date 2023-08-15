class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    
    for(int index = 1; index < nums.size(); index++) {
        if(nums[index ] == nums[index - 1]) {
            return true;
        }
    }

    return false;
        
    }
};