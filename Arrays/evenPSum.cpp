#include<iostream>
using namespace std;


long long int findOdd(long long int n){
     bool odd = false; 
     if (n % 2 == 0) odd=false; 
    else odd=true;
    if (odd) return double((n/2)+1);
    else return double(n/2);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        //Online Judge
            #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt","w", stdout);
            #endif

    int T;
    long long int A=0,B=0,count=0;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>A>>B;

     long long int oddInA=findOdd(A);
     long long int oddInB=findOdd(B);
     count=(oddInA*oddInB)+((A-oddInA)*(B-oddInB)) ;
        cout<<count<<endl;
    }


    return 0;
}