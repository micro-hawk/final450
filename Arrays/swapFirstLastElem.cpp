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
		int temp;
		temp = arr[0];
		arr[0] = arr[n-1] ;
		arr[n-1] = temp;

		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		} cout << endl;
	}
}