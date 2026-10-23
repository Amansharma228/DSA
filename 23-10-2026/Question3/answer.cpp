#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        int x=u*u-2*a*s;
        if(v*v>=x)cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
    return 0;
}
