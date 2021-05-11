#include <iostream>;
using namespace std;
int main() {
	int b1, b2, b3;
	int a1, a2, a3;
	cin >> a3 >> a2 >> a1;
	cin >> b3 >> b2 >> b1;
	int total_bananas = (b3 * 3) + (b2 * 2) + b1;
	int total_apples = (a3 * 3) + (a2 * 2) + a1;
	if (total_apples > total_bananas) {
		cout << "A";
	}
	else if (total_bananas > total_apples) {
		cout << "B";
	}
	else {
		cout << "T";

	}
}
