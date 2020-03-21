
#include <bits/stdc++.h> 
using namespace std;

int main() {
	// Read the number of test cases.
	int t;
	scanf("%d", &t);
	while (t--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}
