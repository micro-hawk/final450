#include<bits/stdc++.h>
using namespace std;
int main()
{
		//Online Judge
		#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt","w", stdout);
		#endif
		int t; cin >> t; 
		while(t--)
		{
			int n; cin >> n; int arr[n];
			for(int i=0;i<n;i++) 
				cin >> arr[i];
			//printing array
			for(int i=0;i<n;i++)
				cout << arr[i] << " ";
			cout << "\n";

			//Shifting elements to the right;
			int temp; temp=arr[n-1];
			for(int i=n-1; i>=0; i--)
			{
				arr[i] = arr[i-1];
			} arr[0] = temp;

			cout << "SHIFTING ARRAYS TO RIGHT\n" ;
			for(int i=0;i<n;i++)
				cout << arr[i] << " ";
			cout << endl;
		}
}