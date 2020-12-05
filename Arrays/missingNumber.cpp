#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
	#endif
	vector<int> v; int n; cin >> n;  int temp =n;
	v.reserve(n);
	for (int i = 0; i < n; ++i)
	{
		int input; cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	// vector<int> artemp; artemp.reserve(temp);
	// for (int i = 0; i < temp; ++i)
	// {
		
	// } 
	int firstElement = v[0];
	for (int i = 0; i < n; ++i)
	{
		if (v[i] != firstElement)
		{
			cout << firstElement << " ";
			break;
		}
		firstElement++;
	}
	cout << "\n";
}