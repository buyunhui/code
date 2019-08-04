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
    // ֻʣ��һ��Ԫ�أ���ô�������Ԫ�ر������Ҹ��б�������ɿ������
    if (start == end)
    {
        for (int i = 0; i < end; i++)
        {
            cout << list[i];
        }
        cout << endl;
        num++;
    }
    // �������Ǳ������д�start��end��Ԫ����Ϊ��һ��Ԫ�أ�ʣ��Ԫ�ؽ���ȫ����
    else
    {
        for (int i = start; i < end; i++)
        {
            // ���list[i:end]�������У���Ԫ��list[i]��ʣ�²���list[i+1:end]�е�Ԫ�����ظ��ģ��򲻽��к���Ľ�����ȫ����
            // ������к���Ľ�����ȫ���С�������֤ÿ���������У��ظ�Ԫ��ֻ��һ����Ϊ��Ԫ��
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