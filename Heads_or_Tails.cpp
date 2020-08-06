#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Tossing a coin..." << endl;
	int heads = 0, tails = 0;
	
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
