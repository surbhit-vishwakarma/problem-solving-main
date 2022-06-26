// Difficulty - Easy
// Problem Statement :-
/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

 

Example 1:

Input: nums = [1,2,3]
Output: 6

Example 2:

Input: nums = [1,2,3,4]
Output: 24

Example 3:

Input: nums = [-1,-2,-3]
Output: -6

 

Constraints:

    3 <= nums.length <= 104
    -1000 <= nums[i] <= 1000


*/
// TC - O(nLogn) SC - O(1) 
// Code:- 
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3)
        {
            return (nums[0]*nums[1]*nums[2]);
        }
        
        sort(nums.begin(),nums.end());
        
        int res = INT_MIN;
        
        int i = 0 , j = 1 , k = nums.size()-1;
        while(j<k)
        {
            if(res < nums[i]*nums[j]*nums[k])
            {
                res = nums[i]*nums[j]*nums[k];
            }
            
            i++;
            j++;
        }
        
        return res;
    }
};