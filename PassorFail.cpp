#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n , x , p;
         cin>>n>>x>>p;
         if ((x*3-(n-x)>=p)) 
         {
     cout<< "YES"<<"\n";
         }
    else{
        cout <<"NO"<<"\n";
        }
    }
    return 0;
    }
