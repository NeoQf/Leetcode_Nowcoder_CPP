#include <iostream>
using namespace std;
#include <vector>
#include "_001_����֮��.h"

int main()
{
	cout << "\n\n\n\n" << endl;
	cout << "�����ǵ��õĽ��" << endl;
	vector<int>obj02;//����һ�������洢���� int
	vector<int>obj03;//����һ�������洢���� int
	obj02.push_back(2);
	obj02.push_back(7);
	obj02.push_back(11);
	obj02.push_back(15);
	Solution s;
	obj03 = s.twoSum(obj02, 9);

	for (int i = 0; i < obj03.size(); i++)//size()������ʵ�����ݸ���
	{
		cout << obj03[i] << ",";
	}

	return 0;
}