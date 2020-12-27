#include<bits/stdc++.h>
using namespace std; 
int main() {
	// INPUT AND OUTPUT files
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int t; cin >> t; while (t--){
		int n; cin >> n; int arr[n];
		for(int i=0; i<n;i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		for(const auto e:arr)
			cout << e << " "; cout << '\n';

		int sum=0, count =0;
		for (int i = 0; i < n; ++i)
		{
			sum = sum + arr[i];
			if (sum <= arr[n-1])
			{
				count ++;			
			} else if (sum > arr[n-1])
			{
				break;
			}
		}
		cout << count << '\n';
	}
	
	return 0;
	}