#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        
        int n;
        cin>>n;
        int x=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(ans<x){
                ans=x;
            }
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
