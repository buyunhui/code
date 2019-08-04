#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>
inline void Swap(T& a, T& b)
{
    T temp = a; a = b; b = temp;
}

template <class T>
bool whetherSwap(T list[], int start, int end)
{
    for (int i = start + 1; i < end; i++)
    {
        if (list[i] == list[start]) 
        return false;
    }
    return true;
}

template <class T>
void Permutation(T list[], int start, int end, int &num)
{
    // 只剩下一个元素，那么就是这个元素本身，并且该列表排序完成可以输出
    if (start == end)
    {
        for (int i = 0; i < end; i++)
        {
            cout << list[i];
        }
        cout << endl;
        num++;
    }
    // 否则，我们遍历所有从start到end的元素作为第一个元素，剩余元素进行全排列
    else
    {
        for (int i = start; i < end; i++)
        {
            // 如果list[i:end]子问题中，首元素list[i]和剩下部分list[i+1:end]中的元素有重复的，则不进行后面的交换和全排列
            // 否则进行后面的交换和全排列。这样保证每个子问题中，重复元素只有一次作为首元素
            if (whetherSwap(list, i, end))
            {
                Swap(list[start], list[i]);
                Permutation(list, start + 1, end, num);
                Swap(list[start], list[i]);
            }
        }
    }
}

int main()
{
    int my_list[4] = {1, 1, 1, 1};
    int num =0;
    Permutation(my_list, 0, 4, num);
    cout <<num;
}