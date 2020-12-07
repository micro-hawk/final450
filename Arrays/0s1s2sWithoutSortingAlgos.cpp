#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	 int n; int temp;
	 int arr[n];
	cin >> n;
	for(int i=0; i<n; i++)
	{
		int input; cin >> input;
		arr[i] = input;
	}
	//printing array
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " " ;
	}
	 cout << endl;
	
	//sorting - ASCENDING ORDER
	 int i,j;
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//printing array
	
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
	return 0;
}