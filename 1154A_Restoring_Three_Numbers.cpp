#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);
    cout<<x[3]-x[0]<<" "<<x[3]-x[1]<<" "<<x[3]-x[2]<<endl;
	return 0;
}
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
