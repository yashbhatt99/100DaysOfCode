#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int arr[] = {11, 50, 76, 8, 8, 8, 90};
	int n = sizeof(arr) / sizeof(int);

	//Returns a boolean value in terms of search results.

	int key;
	cin >> key;

	bool present = binary_search(arr, arr + n, key);

	if (present)
	{
		cout << "present" << endl;
	}
	else
	{
		cout << "Absent" << endl;
	}

	//lower_bound --> returns the the index which is >= key.
	auto lb = lower_bound(arr, arr + n, 8);
	cout << "Lower Bound = " << (lb - arr) << endl;

	//upper_bound --> returns the the index which is strictly > key.
	auto ub = upper_bound(arr, arr + n, 8);
	cout << "Upper Bound = " << (ub - arr) << endl;

	//Number of occurences --> upper bound - lower bound.
	cout << "Number of occurences = " << (ub - lb) << endl;

	return 0;
}