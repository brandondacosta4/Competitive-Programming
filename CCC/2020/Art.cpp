#include <iostream>
#include <string>

using namespace std;
int main() {
	int n;
	cin >> n;
	int largestx = -1;
	int largesty = -1;
	int smalestx = 101;
	int smalesty = 101;

	for (int i = 0; i < n; i++) {
		int x;
		int y;
		string w;
		cin >> x >> w;
		y = stoi(w.substr(1, w.length()));
		largestx = max(largestx, x);
		smalestx = min(smalestx, x);
		largesty = max(largesty, y);
		smalesty = min(smalesty, y);
	}
	cout << smalestx - 1 << "," << smalesty - 1 << endl;
	cout << largestx + 1 << "," << largesty + 1 << endl;
	return 0;
}
