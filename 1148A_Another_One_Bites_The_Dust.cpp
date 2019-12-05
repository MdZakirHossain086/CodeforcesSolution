#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int a, b, c;
	long long int good = 0;

	cin >> a >> b >> c;

	if (a > b) {
		good= good + (2 * b);
		good= good+ (2 * c);
		good += 1;
	}
	if (b > a) {
		good= good+ (2 * a);
		good+= 1;
		good = good + (2 * c);
	}
	if (b == a) {
		good = good + (2 * a);
		good = good + (2 * c);
	}
	cout << good << endl;
	return 0;
}

