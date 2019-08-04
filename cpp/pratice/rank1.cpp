#include <iostream>
#include <string>
#include <vector>

using namespace std;

void FullPermutation(vector<int>& input, size_t begin, size_t end)
{ 
    if (begin >= end)
    {
        for(auto i:input) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        for (size_t i = begin; i <= end; i++) {
            if(input[begin] != input[i])
            {
                 swap(input[begin], input[i]);           
                 FullPermutation(input, begin + 1, end);
                 swap(input[begin], input[i]);
            }
         }
    }
}  


int main()
{
    //string test("123");
    vector<int> test{1,2,1,1};
    FullPermutation(test, 0, 3);
}