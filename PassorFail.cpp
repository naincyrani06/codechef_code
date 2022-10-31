#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n , x , p;
         cin>>n>>x>>p;
         if ((x*3-(n-x)>=p)) {
     cout<< "PASS"<<"\n";
    }
    else{
        cout <<"FAIL"<<"\n";
        }
    }
    return 0;
    }
