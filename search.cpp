#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = {11, 50, 76, 8, 90};
	int n = sizeof(arr) / sizeof(int);

	// To search a specific number in a list, We can use the in built method "find()".

	int key;
	cin >> key;

	auto it = find(arr, arr + n, key);

	int index = it - arr;

	if (index == n)
	{
		cout << "Number Not Present in the List" << endl;
	}
	else
	{
		cout << "Present at " << index << " index" << endl;
	}




	return 0;
}