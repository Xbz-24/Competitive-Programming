#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include<cmath>
#define ll long long
using namespace std;

// Solution for 69A Codeforces
int main()
{
	
	int n;
	cin >> n;
	ll res=0;
	int sx = 0;
	int sy = 0;
	int sz = 0;
	for (int i = 0; i < n; i++) 
	{
		int x, y, z;
		cin >> x >> y >> z;
			sx += x;
			sy += y;
			sz += z;
	}
	if (sx==0&&sy==0&&sz==0)
	{
		cout << "YES";
	}
	else
		cout << "NO";
}

