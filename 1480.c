/* 1480. Running Sum of 1d Array
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums. */

class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> runningSum;
        int size = nums.size();
        int start = 0;
        
        for (int i=0; i < size; i++)
        {
            for (start; start < size; start++)
            {
                int new_entry = nums.at(i);
                if (i > 0)
                {
                    new_entry += nums.at(i-1);
                }
                runningSum.push_back(new_entry);
            }
        }
        
        return runningSum;
    }
};
