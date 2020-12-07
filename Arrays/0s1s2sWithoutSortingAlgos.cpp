#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	std::vector<int> v; int n; cin >> n;
	v.reserve(n);
	for (int i = 0; i < n; ++i)
		{
			int input; cin >> input;
			v.push_back(input);
		}	sort(v.begin(), v.end());
	for(const auto e:v){`
		cout << e << " ";
	}
	cout << "\n";
}