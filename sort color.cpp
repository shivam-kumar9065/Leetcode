class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
  
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < nums.size(); i++) {
        switch (nums[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
  
    i = 0;
  
    while (cnt0 > 0) {
        nums[i++] = 0;
        cnt0--;
    }
  
    while (cnt1 > 0) {
        nums[i++] = 1;
        cnt1--;
    }
  
    while (cnt2 > 0) {
        nums[i++] = 2;
        cnt2--;
    }
        
    }
};