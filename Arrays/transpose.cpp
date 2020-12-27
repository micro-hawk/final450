#include<bits/stdc++.h>
using namespace std; 
int main() {
	// INPUT AND OUTPUT files
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif

int m,n,j;
cin>>m>>n;
int a[m][n];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>a[i][j];
}

}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cout<<a[j][i]<<" ";

}
cout<<"\n";
}
return 0;
	}endif