#include <iostream>
using namespace std;
#include <vector>
#include "_001_两数之和.h"

int main()
{
	cout << "\n\n\n\n" << endl;
	cout << "下面是调用的结果" << endl;
	vector<int>obj02;//创建一个向量存储容器 int
	vector<int>obj03;//创建一个向量存储容器 int
	obj02.push_back(2);
	obj02.push_back(7);
	obj02.push_back(11);
	obj02.push_back(15);
	Solution s;
	obj03 = s.twoSum(obj02, 9);

	for (int i = 0; i < obj03.size(); i++)//size()容器中实际数据个数
	{
		cout << obj03[i] << ",";
	}

	return 0;
}