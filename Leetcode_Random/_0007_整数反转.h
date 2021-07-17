#pragma once
#include<iostream>  
#include<math.h>
using namespace std;


class Solution {
public:
	int reverse(int x)
	{
		long n = 0;
		while (x)
		{
			n = n * 10 + x % 10;
			x /= 10;
		}
		return n > INT_MAX || n < INT_MIN ? 0 : n;
	}
};

Solution s;
int main1()
{
	int res = s.reverse(1534236469);
	cout << res << endl;
	return 1;
}