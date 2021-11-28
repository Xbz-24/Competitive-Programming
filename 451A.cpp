#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include<cmath>
 
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int x = min(n, m);
	if (x % 2)
	{
		cout << "Akshat";
	}
	else
		cout << "Malvika";
}
