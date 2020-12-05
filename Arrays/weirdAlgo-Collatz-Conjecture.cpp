// Consider an algorithm that takes as input a positive integern.Ifnis even, the algorithmdivides it by two, and ifnis odd, the algorithm multiplies it by three and adds one. Thealgorithm repeats this, untilnis one. For example, the sequence forn=3 is as follows:3→10→5→16→8→4→2→1Your task is to simulate the execution of the algorithm for a given value ofn.


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