/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] ????�C???��
 */
#include <string> 
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        string str_(to_string (x));
        string resStr(str_);
        reverse(resStr.begin(), resStr.end());
        
        if (str_ == resStr)
            return true;
        return false

       
    }
};

int main()
{
    cout << Solution().isPalindrome(0);
    return 0;
}
