/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相�?
 */
#include <vector>
class Solution {
public:
    string multiply(string num1, string num2) {
        int lenth1 = num1.size();
        int lenth2 = num2.size();
        
        size_t lenth = lenth1 + lenth2;
        vector<int> res(lenth, 0);
        for (auto i = 0; i < lenth1; i++) {
            for(auto j = 0; j < lenth2; j++) {
                int curIndex = lenth -i - j -2;
                res[curIndex] += (num1[i] - '0') * (num2[j] - '0');
                if(res[curIndex] > 10) {
                    res[curIndex + 1] += res[curIndex] / 10;
                    res[curIndex] = res[curIndex] % 10;
                }
            }
        }
        string resStr(""); 
        for (auto item: res) {
            resStr = to_string(item) + resStr;
        }
        
        int pos = resStr.find_first_not_of("0");
        return resStr.substr(pos, lenth - pos);

    }
};

