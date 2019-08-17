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
string  VectorNum2String(const vector<T>& result)
{
    stringstream ss;
    std::reverse_copy(result.begin(), result.end(), std::ostream_iterator<T>(ss, ""));
    return ss.str();
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
   
    std::array<int, 5> charray { 2, 16, 77, 34, 50 };

    std::cout << charray.data() << '\n';
    cout << VectorNum2String(test1);

std::string base="this is a test string.";
  std::string str2="n example";
  std::string str3="sample phrase";
  std::string str4="useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                 0123456789*123456789*12345
  std::string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." (1)
  str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
  str.replace(8,10,"just a");     // "this is just a phrase."     (3)
  str.replace(8,6,"a shorty",2,5);  // "this is a short phrase."    (4)
  
  std::cout << str << '\n';
}