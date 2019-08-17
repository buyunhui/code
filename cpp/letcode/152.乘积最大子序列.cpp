/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子序列
 */
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

inline int max_three_nums(int &x,int &y,int &z){
    int tmp = max(x, y);
    tmp = max(tmp, z);
    return tmp;
};

inline int min_three_nums(int &x, int &y, int &z){
    int tmp = min(x, y);
    tmp = min(tmp, z);
    return tmp;
}
class Solution {
public:
    
    struct RecordStruct
    {
        int max;
        int preMax;
        int preMin;
    };



    int maxProduct(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

       int i = 1;
       RecordStruct str;
       str.max = nums[0];
       str.preMax = nums[0];
       str.preMin = nums[0];
       while(i < nums.size())
       {
            int max1 = str.max;
            int preMax = str.preMax*nums[i];
            int preMin =str.preMin*nums[i]; 
            str.max = max(max_three_nums(max1, preMax, preMin),  nums[i]);
            str.preMax = max_three_nums(preMax, preMin,  nums[i]);
            str.preMin = min_three_nums(preMax, preMin,  nums[i]); 
            i++; 
       }
       return str.max;
    }

};

