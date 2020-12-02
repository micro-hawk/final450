#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >>t;
    while (t--)
    {
    string str; cin >> str;
    reverse(str.begin(), str.end());
    cout << str;    
    cout <<"\n";
    }
    return 0;
}