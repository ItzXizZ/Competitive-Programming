#include <bits/stdc++.h>
using namespace std;
#define ll long long int 	
#define onlineJudgeIsPresent freopen("div7.in", "r", stdin); freopen("div7.out", "w", stdout);


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,x;
	cin>>n>>x;
	ll pref=0,ans=0;
	map<ll,ll> prefCount;
	prefCount[0]++;
	for(ll i=0; i<n; i++){
		ll num;
		cin>>num;
		pref+=num;
		ll need=pref-x;
		ans+=prefCount[need];
		prefCount[pref]++;
	}
	cout<<ans<<"\n";
	return 0;
}

/*

Here I implemented a prefix sums solution. It is possible to solve this problem using space complexity O(1) rather than O(n) with a different algorithm. 
The main "take-a-ways" from this problem were probably the use of a map to keep track of the past prefix sums.

*/
