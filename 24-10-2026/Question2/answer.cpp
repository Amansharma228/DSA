#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
	// your code goes here
	int maxom=0,maxaddy=0,sumom=0,sumaddy=0;
	int i=0;
	while(i<n){
	    if(a[i]!=0){
	        sumom++;
	        i++;
	    }
	    else{
	        i++;
	        sumom=0;
	    }
	    if(sumom>maxom){
	        maxom=sumom;
	    }
	}
	int j=0;
	while(j<n){
	    if(b[j]!=0){
	        sumaddy++;
	        j++;
	    }
	    else{
	        j++;
	        sumaddy=0;
	    }
	    if(sumaddy>maxaddy){
	        maxaddy=sumaddy;
	    }
	}
	if(maxom<maxaddy)cout<<"addy";
	else if(maxom>maxaddy)cout<<"om";
	else cout<<"draw";
	cout<<endl;
    }
    
	return 0;

}
