
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, M;
        cin >> N >> M;

        string A;
        cin >> A;

        vector<long long> ones;

        for (int i = 0; i < N; i++) {
            if (A[i] == '1') {
                ones.push_back(i + 1);
            }
        }

        long long x = ones.size();
        long long totalOnes = x * M;

        if (totalOnes == 0) {
            cout << N * M << endl;
            continue;
        }

        if (totalOnes % 2 != 0) {
            cout << 0 << endl;
            continue;
        }

        long long target = totalOnes / 2;

        long long copy1 = (target - 1) / x;
        long long rem1 = (target - 1) % x;
        long long pos1 = copy1 * N + ones[rem1];

        long long next = target + 1;

        long long copy2 = (next - 1) / x;
        long long rem2 = (next - 1) % x;
        long long pos2 = copy2 * N + ones[rem2];

        cout << pos2 - pos1 << endl;
    }

    return 0;
}

// i did it but it was partially correct and was not able to pass half testcases ,but was failing for very large strings.
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int T;
// 	cin>>T;
// 	while(T--){
	    
// 	    int N,M;
// 	    cin >> N >> M;
// 	    string A;
// 	    cin>>A;
// 	    string B=A;
// 	    for(int i=1;i<M;i++){
// 	        B+=A;
// 	    }
// 	    int x=0;
// 	    for(int i=0;i<N;i++){
// 	        if(A[i]=='1')x++;
// 	    }
// 	    int noOfOnes=x*M;
// 	    if(noOfOnes==0){
// 	        cout<<M*N;
// 	        cout<<endl;
// 	        continue;
// 	    }
// 	    if(noOfOnes%2!=0){
// 	    cout<<0;
// 	    cout<<endl;
// 	    continue;
// 	    }
// 	    if(noOfOnes%2==0&&(N-x)==0){
// 	        cout<<1;
// 	        cout<<endl;
// 	        continue;
// 	    }
// 	    int count=0;
// 	    int i=0;
// 	    while(count<noOfOnes/2){
// 	        if(B[i]=='1'){
// 	            count++;
// 	        }
// 	        i++;
// 	    }
// 	    if(B[i]=='1'){
// 	        cout<<1<<endl;
// 	        continue;
// 	    }
// 	    int ans=1;
// 	    while(B[i]!='1'){
// 	        ans++;
// 	        i++;
// 	    }
// 	    cout<<ans;
	    
// 	    cout<<endl;
// 	}
//     return 0;
// }
