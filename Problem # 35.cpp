class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
          int mid;
        bool isFound = false;
        int start = 0;
        int end = nums.size() - 1;  
        
        while (start <= end) {
            mid = (start + end) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        int pos = start;  
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > target) {
                pos = i;
                isFound = true;
                break;
            }
        }
        
        if (!isFound) {
            return pos;
        }
        return pos;
    }
};