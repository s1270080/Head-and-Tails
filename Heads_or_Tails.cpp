#include <bits/stdc++.h>
using namespace std;

int main() {
	int heads = 0, tails = 0;
	string name;
	cout << "Who are you?" << endl;
	cout << "> "; cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Tossing a coin..." << endl;
	
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 3; i++) {
		int r = rand() % 2;
		cout << "Round " << i << ": ";
		if (r == 0) {
			heads++;
			cout << "Heads" << endl;
		} else {
			tails++;
			cout << "Tails" << endl;
		}
	}
	cout << "Heads: " << heads << ", Tails: " << tails << endl;
	cout << "You " << (heads > tails ? "won!" : "lost.") << endl;
	return (0);
}
