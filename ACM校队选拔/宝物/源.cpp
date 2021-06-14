#include<stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	long long n, m, t, buf;
	int count = 0;
	cin >> n >> m;
	if (m == n)
	{
		cout << "0";
		return 0;
	}
	if (m % n == 0 && m != n)
	{
		t = m / n;
		buf = t;
		while (buf % 2 == 0 || buf % 3 == 0)
		{
			if (buf % 2 == 0)
			{
				buf = buf / 2;
				count++;
			}
			if (buf % 3 == 0)
			{
				buf = buf / 3;
				count++;
			}
		}
		if (buf == 1)
		{
			cout << count;
		}
		else cout << "-1";
	}
	else cout << "-1";
	return 0;
}