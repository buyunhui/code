#include <iostream>
#include <vector>
using namespace std;

void mySwap(int& a, int &b)
{
    int tmp = a;;
    a = b;
    b = tmp;
}

int quicksort(vector<int>& arr, int n)
{
    int i, j;
    for (i = 1; i < n; i++)
        for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
            mySwap(arr[j], arr[j + 1]);
    return 0;
}

int main(){
    vector<int> test{1,5,4,2,3};
    quicksort(test,5);
    for(int i=0; i <5 ; i++)
    {
        cout<<test[i];
    }
    return 0;
}