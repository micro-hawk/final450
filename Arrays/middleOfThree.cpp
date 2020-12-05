#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
	#endif

    int x,y,z; cin >> x >> y >> z;
    int arr[3] = {x,y,z};
  	sort(arr, arr+3);
  	// for(const auto e:arr){
  	// 	cout << e << " ";
  	// }

  		cout << "Middle element is: " << arr[1] << endl;
	return 0;
}