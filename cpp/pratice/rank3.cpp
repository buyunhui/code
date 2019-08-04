#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T>
inline void Swap(T list[], int a, int b)
{
    T temp = list[a]; list[a] = list[b]; list[b] = temp;
}

template <class T>
void arrayReverse(T list[], int start, int end)
{
    int i = start;
    int j = end;
    while(j > i){
        Swap(list, i, j);
        i++;
        j--;
    }
}

template <class T>
bool Next(T list[], int len)
{
    bool exist_next = true;
    for (int i = len - 1; i > 0; i--)
    {
        // 从后往前两两比较，找到第一对前面元素大于后面元素的地方
        if (list[i - 1] < list[i])
        {
            int index_swap = i;
            for (int j = i + 1; j < len; j++)
            {
                if (list[j] > list[i - 1])
                {
                    index_swap = j;
                } else if (list[j] < list[i -1]) {
                    index_swap = j -1;
                    break;
                }
            }
            Swap(list, i-1, index_swap);
            arrayReverse(list, i, len - 1);
            return exist_next;
        }
    }
    exist_next = false;
    return exist_next;
}

// 此函数需要传入排序好的list（从小到大）
template <class T>
void Permutation(T list[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << list[i];
    }
    cout << endl;
    
    while(Next(list, len))
    {
        for (int i = 0; i < len; i++)
        {
            cout << list[i];
        }
        cout << endl;
    }
}


int main()
{
    int my_list[] = { 1,2,3,4};
    Permutation(my_list, 4);
}