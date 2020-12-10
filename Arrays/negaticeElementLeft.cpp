#include<bits/stdc++.h>
using namespace std; 
int main() {
	// INPUT AND OUTPUT files
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	
	//printing that array
	for(const auto e:arr)
	{
		cout << e << " ";
	} cout << "\n";

	int temp;
	for (int i = 0; i < n; ++i)
	{
		for(int j=i+1;j<n; ++j)
		{
			if (arr[i] == arr[j]	)
			{
				break;
			} else if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	//printing that array
	for(const auto e:arr)
	{
		cout << e << " ";
	} cout << "\n";

	return 0;
	}