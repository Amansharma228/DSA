#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
    	int N;
    	cin>>N;
    	if(N==1){
    	    cout<<3;
    	}
    	if(N==2){
    	    cout<<15;
    	}
    	if(N==3){
    	    cout<<123;
    	}
    	if(N>3){
    	    cout<<1;
    	    for(int i=0;i<N-2;i++){
    	        cout<<0;
    	    }
    	    cout<<5;
    	}
    	
    	cout<<endl;
	}
    return 0;
}
