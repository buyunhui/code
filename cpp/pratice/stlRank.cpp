#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void permutation(vector<int>& str, int length)
{
	sort(str.begin(), str.end());
	
    do
	{
		for(int i=0; i<length; i++)
			cout<<str[i];

		cout<<endl;
	}while(next_permutation(str.begin(),str.end()));

}

int main(void)
{
	vector<int> test{1,2,3,1};
	cout<<"全部全排列的结果为："<<endl;
	permutation(test,4);
	system("pause");
	return 0;
}