#include <bits/stdc++.h>
using namespace std;
#define ll long long int 	
#define onlineJudgeIsPresent freopen("div7.in", "r", stdin); freopen("div7.out", "w", stdout);
 
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		int ans=2<<100;
		ans-=1;
		for(int i=0; i<n; i++){
			cin>>a[i];
			ans=a[i]&ans;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
