#include <iostream>

using namespace std;

int main() {
  int s;
  int m;
  int l;
	cin >> s >> m >> l;
	int hos = s + (2 * m) + (3 * l);

	if (hos >= 10) {
		cout << "happy";
	}
	else {
		cout << "sad";
	}
}
