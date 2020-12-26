#include<bits/stdc++.h>
using namespace std;
int main()
{
		//Online Judge
		#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w", stdout);
		#endif
	int n; cin >>n; std::vector<int> v;
	v.reserve(n);
    for (auto &it : v) {
        cin >> it;
    }
	for(const auto e:v)
	{
		cout << e << " ";
	}
	return 0;
}