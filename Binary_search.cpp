#include<bits/stdc++.h>
using namespace std;


int bin(int ans[], int n, int k) {

	int start = 0;
	int end = n - 1;
	int mid = (start + end) / 2;

	while (start <= end) {

		if (ans[mid] == k) {
			return mid;

		}
		if (ans[mid] > k) {
			end = mid - 1;
		}
		if (ans[mid] < k) {
			start = mid + 1;
		}

		mid = (start + end) / 2;




	}
	return -1;


}
int main() {



	int n;
	cin >> n;

	int ans[n];

	for (int i = 0; i < n; i++) {
		cin >> ans[i];
	}

	int k;
	cin >> k;

	cout << bin(ans, n, k);
}
