/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
#include <string> 
class Solution {
public:
    bool isPalindrome(int x) {
        
        string str_(to_string (x));
        string resStr(str_);
        reverse(resStr.begin(), resStr.end());
        
        if (str_ == resStr)
            return true;
        return false;
    }
};

