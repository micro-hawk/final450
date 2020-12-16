#include<bits/stdc++.h>
using namespace std; 
int main() {
	// INPUT AND OUTPUT files
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i] ;
		}

		//Printing Array
		for(const auto e:arr)
		{
			cout << e << " " ;
		} cout << "\n";
		
		cout << arr[0] << " ";
		//cycling the array
		int temp;
		arr[0] = temp;
		arr[0] = 100;

		cout << arr[0] << " ";
	}

	return 0;
	}