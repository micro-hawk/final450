#include<iostream>
using namespace std;

int main()
{
    int n; cout  << "size: "; cin >> n; int len; cout << "Length: "; cin>> len;
    int arr[n],i; cout << "enter your elements: ";
    for(i=0;i<len;i++)
        cin >> arr[i];
    cout << "Arrays: \n";
    for(i=0;i<len;i++) cout << arr[i] << " ";
// replacing elements: 
    int index, x;
    cout << "\n ENter your index and value want to replace: \n"; cin >> index >>x;
    for(i=len;i>index;i--){
        arr[i] = arr[i-1];
        
    }
    arr[index] = x; 
    len++;
    cout << endl;
     cout << "Arrays: \n";
    for(i=0;i<len;i++) cout << arr[i] << " ";
}