#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <array>
#include <cstring>

using namespace std;
constexpr size_t PER_LINE_INPUT_NUM = 5;


template<typename T>
void GetLinesInputData(vector<vector<T>> &inputData, size_t& lineNum)
{
    cin >> lineNum;
    inputData.reserve(lineNum);
   
    for(auto loopRow = 0; loopRow < lineNum; loopRow++) {
        vector<T> tmpVec;
        tmpVec.reserve(PER_LINE_INPUT_NUM);
        for(auto loopCol = 0; loopCol < PER_LINE_INPUT_NUM; loopCol++){
            T cinTmp;
            cin >> cinTmp;
            tmpVec.push_back((T)cinTmp);
        }
        inputData.push_back(tmpVec);
    }
}

template<typename T>
void printOutData(const vector<vector<T>> &outData, const string& other = "", string delimiter = " ")
{
    for(auto row: outData) {
        if (other != "") {
            cout << other << endl;
        }

        for(auto col: row) {
           cout << col << delimiter;
        }
        cout << endl;
   }
}

int main()
{
    size_t lineNum = 0;
    vector<vector<int>> inputData;
    GetLinesInputData(inputData, lineNum);
    printOutData(inputData);

    vector<int> test;
    test.resize(5);
    test.push_back(1);
    cout << test.size(); 
    return 0;
}