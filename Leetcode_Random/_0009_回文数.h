#pragma once
//#include "_0009_回文数.h"
#include<iostream>  
#include<math.h>
using namespace std;

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
		{
			return false;
		}

		long y = 0;
		int tmp1;
		int tmp2 = x;
		while (x > 0)
		{
			tmp1 = x % 10;
			x = x / 10;
			y = y * 10 + tmp1;
		}
		return tmp2 == y;
	}
};


Solution s;
int main1()
{
	int res = s.isPalindrome(1534236469);
	cout << res << endl;
	return 1;
}

