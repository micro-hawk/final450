#include<bits/stdc++.h>
using namespace std; 
int main() {
	// INPUT AND OUTPUT files
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int t; cin >>t;
	while(t--)
	{
		int n; cin >> n; std::vector<int> v; v.reserve(n);
		for(int i=0;i<n;i++){
			int input; cin >> input; 
			v.push_back(input);
		}
		sort(v.begin(), v.end());
		// for(const auto e:v)
		// {
		// 	cout << e << ' ';
		// } cout << '\n';
		for (int i = 1; i < n; i++)
		{
			if (v[i-1] != v[i] && v[i] != v[i+1]) 	
			{
				cout << v[i] << " ";
				break;
			}
		}
		cout << '\n';
	} 
}