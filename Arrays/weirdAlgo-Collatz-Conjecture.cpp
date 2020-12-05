#include <bits/stdc++.h>
using namespace std; 
int main()
{
	#ifndef ONLINE_JUDGE
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
	#endif

	int n; cin >> n;
	while(true)
	{
		cout << n << " ";
		if (n==1)
			break;
		if (n%2==0)
			n=n/2;
		else
			n = n*3+1;
	}

}