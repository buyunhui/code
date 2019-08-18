#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <array>
#include <cstring>

using namespace std;

template<typename T>
void GetLinesInputData(const size_t perLineNum, vector<vector<T>> &inputData, size_t& lineNum)
{
    cin >> lineNum;
    inputData.reserve(lineNum);
   
    for(auto loopRow = 0; loopRow < lineNum; loopRow++) {
        vector<T> tmpVec;
        tmpVec.reserve(perLineNum);
        for(auto loopCol = 0; loopCol < perLineNum; loopCol++){
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
    GetLinesInputData(2,inputData, lineNum);
    printOutData(inputData);

    vector<int> test;
    test.resize(5);
    test.push_back(1);
    cout << test.size(); 
    return 0;
}