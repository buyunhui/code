/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] ??¡è??¡ã????¡¯?
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vRet;
        bool flag = false;
        flag = ture;
        for(int i=0;i<nums.size()-1;++i)
        {
            for(int j = i+1;j<nums.size();++j)
            {
                if(nums[i]+nums[j]==target)
                {
                    vRet.push_back(i);
                    vRet.push_back(j);
                    flag = true;
                    break;
                }
            }
            if (flag==true)
            {
                return vRet;
            }

        }
        return vRet;
    }
};
