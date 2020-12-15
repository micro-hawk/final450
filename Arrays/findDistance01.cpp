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
	long long int x1,x2,y1,y2; cin >> x1>>y1>>x2>>y2;
	float distance = sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
	cout << setprecision(11);
	cout << distance;
	return 0;
	}
}