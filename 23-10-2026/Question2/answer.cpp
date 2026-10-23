#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        int A,B,X;
        cin>>A>>B>>X;
        int years=0;
        years=(B-A)/X;
        cout<<years<<endl;
    }
    return 0;
}
