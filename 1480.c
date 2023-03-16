/* 1480. Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums. */

class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int total = 0;
        vector<int> runningSum;
        int size = nums.size();
        
        for (int i=0; i < size; i++)
        {
            total = 0;   // reset total to 0 for the inner loop
            for (int j=0; j <= i; j++)
            {
                total += nums[j];
            }
            runningSum.push_back(total);
        }
        
        return runningSum;
    }
};
