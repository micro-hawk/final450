//sdjjsdbjsd

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        vector<int> v; 
        v.reserve(n);
        for (int i = 0; i < n; i++)
        {
            int input; cin >> input;
            v.push_back(input);
        }
        
        sort(v.begin(), v.end());
        cout << "Min element is: " << v[0]<< " Max element is: " << v[n-1];
        cout << endl;
    }
    
}