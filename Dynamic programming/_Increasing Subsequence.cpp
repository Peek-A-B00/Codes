#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for (int x = 0; x < n; x++) {
		cin >> arr[x];
	}
	auto itr = lower_bound(arr, arr + n, 6);
	cout << itr
		<< endl; // returns the address position at which 6
				// is present in memory if it is present
	cout << *itr << endl; // returns the no. stored at the
						// itr memory address
	auto it = lower_bound(arr, arr + n, 6)
			- arr; // returns the index position of
					// searched element in array
	cout << it << endl;
	auto itr2 = lower_bound(
		arr, arr + n,
		3); // if the searched element is not present then
			// it will give next greater element
	cout << *itr2;
	return 0;
}
