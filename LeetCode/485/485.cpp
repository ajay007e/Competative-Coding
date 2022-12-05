class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                maxCount = maxCount > count ? maxCount : count;
                count = 0;
            }
            else
                count++;
        }
        
        maxCount = maxCount > count ? maxCount : count;
        return maxCount;
    }
};

