class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index ,index1 = 0;
        vector<int> temp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    temp.push_back(i);
                    temp.push_back(j);
                    //index1 = j;
                }
            }
        }
        
        return temp;
    }
};