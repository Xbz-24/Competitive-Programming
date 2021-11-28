#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include<cmath>
 
using namespace std;
int main()
{
	int count = 0;
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i <= d; i++) 
	{
		if (i%k==0||i%l==0||i%m==0||i%n==0) 
		{
			count++;
		}
	}
	cout << count;
}
