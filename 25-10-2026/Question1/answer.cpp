#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        
        int N,K;
        cin>> N >> K;
        int arr[N];
        int count=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i]>K)count++;
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}
