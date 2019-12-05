#include <bits/stdc++.h>
using namespace std;
int n;
set<int> setX, setY;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		setX.insert(x);
		setY.insert(y);
	}
	cout << min(setX.size(), setY.size()) << endl;
	return 0;
}
