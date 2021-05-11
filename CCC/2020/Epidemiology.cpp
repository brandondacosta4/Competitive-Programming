#include <iostream>
using namespace std;
int p;
int n;
int r;
int days = 0;
int n1;
int total_infected;

int result() {
	while (n <= p) {
		n1 = n;
		n += total_infected * r;
		total_infected = n - n1;
		days++;

	}
	return days;

}
int main() {
	cin >> p;
	cin >> n;
	cin >> r;
	total_infected = n;
	cout << result();

}
