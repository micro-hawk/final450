#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n; cout  << "size: ";
    int arr[n],i; cout << "enter your elements: ";
    for(i=0;i<n;i++)
        cin >> arr[i];
    cout << "Arrays: \n";
    for (const auto& e:arr)     
        cout << e << " ";


    // replacing elements: 
    
}