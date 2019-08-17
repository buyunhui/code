/*
 * @lc app=leetcode.cn id=640 lang=cpp
 *
 * [640] 求解方程
 */
class Solution {
public:
    string solveEquation(string equation) {
        int num = 0;
	int sum = 0;
	bool pre = true;
	 bool flag = true;
	for (auto x : equation) {
		switch (x)
		{
		case '+':pre = (true && flag); break;
		case '-':pre = !(false || flag); break;
		case '=':flag = false; pre = false; break;
		case 'x': num += (pre ? 1 : -1); break;
		default:
			int tmp = x - '0';
			sum += (pre ? tmp : -tmp); break;

		}
	}

	if (num == 0 && sum == 0) {
		return "Infinite solutions";
	}

	if (num == 0 && sum != 0) {
		return "No solution";
	}

	int res = -sum / num;
	return "x=" + to_string(res);
    }
};

