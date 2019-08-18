#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <array>
#include <cstring>

using namespace std;


// 数字类型（char int double）序列 转string
template<typename T>
string  VectorNum2String(const vector<T>& result, bool isReverse=false)
{
    stringstream ss;
    if (isReverse) {
      std::reverse_copy(result.begin(), result.end(), std::ostream_iterator<T>(ss, ""));
    } else {
      std::copy(result.begin(), result.end(), std::ostream_iterator<T>(ss, ""));
    }
    return ss.str();
}

string  SliceStrFromChar(const string& inStr, const string beginChar, bool isReverse=false)
{
  string resStr(inStr);
  if (isReverse) {
    reverse(resStr.begin(), resStr.end());
  }
  size_t pos = resStr.find_first_of(beginChar); 
  return resStr.substr(pos);
}

string  SliceStrFromNotChar(const string& inStr, const string beginChar, bool isReverse=false)
{
  string resStr(inStr);
  if (isReverse) {
    reverse(resStr.begin(), resStr.end());
  }
  size_t pos = resStr.find_first_not_of(beginChar); 
  return resStr.substr(pos);
}

template<typename T>
void TokenizeStr(const string& str, vector<string>& tokens, const T& delimiters)
{
  // Skip delimiters at beginning.
  string::size_type lastPos = str.find_first_not_of(delimiters, 0);
  // Find first "non-delimiter".
  string::size_type pos     = str.find_first_of(delimiters, lastPos);
  while (string::npos != pos || string::npos != lastPos)
  {
    // Found a token, add it to the vector.
    tokens.push_back(str.substr(lastPos, pos - lastPos));
    // Skip delimiters.  Note the "not_of"
    lastPos = str.find_first_not_of(delimiters, pos);
    // Find next "non-delimiter"
    pos = str.find_first_of(delimiters, lastPos);
  }
}

vector<string> splitStrByChar(const string &str, const char pattern = '\n')
{
    vector<string> res;
    stringstream input(str);   //读取str到字符串流中
    string temp;
    while(getline(input, temp, pattern))
    {
        res.push_back(temp);
    }
    return res;
}

/*
Convert string to integer (function template )
stol 
Convert string to long int (function template )
stoul 
Convert string to unsigned integer (function template )
stoll 
Convert string to long long (function template )
stoull 
Convert string to unsigned long long (function template )
stof 
Convert string to float (function template )
stod 
Convert string to double (function template )
stold 
Convert string to long double (function template )

Convert to strings
to_string 
Convert numerical value to string (function )
*/


int main()
{
    vector<double> test1(10, 1.1);
   
    //std::array<int, 5> charray { 2, 16, 77, 34, 50 };

    //std::cout << charray.data() << '\n';
   // cout << VectorNum2String(test1);
   vector<int> test2({1,1,1,1,2});
   // cout << VectorNum2String(test2);
   string x("asda1dasd12asda");
   vector<string>out;
   out = splitStrByChar(x, '1');
   cout << out.size();
}