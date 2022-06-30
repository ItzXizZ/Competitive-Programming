#include <bits/stdc++.h>
using namespace std;
#define ll long long int 	
#define onlineJudgeIsPresent freopen("div7.in", "r", stdin); freopen("div7.out", "w", stdout);
 
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	map<ll,ll> prefCount;
	ll pref=0;
	ll ans=0;
	prefCount[0]++;
	for(int i=0; i<n; i++){
		ll num;
		cin>>num;
		//x=pref[r]-pref[l-1]
		//pref[l-1]=pref[r]
		ll negativeConsider=((num%n)+n)%n;
		pref+=negativeConsider;
		pref=(pref%n+n)%n;
		ans+=prefCount[pref];
		prefCount[pref]++;
	}
	cout<<ans<<"\n";
	return 0;
}
 

/*

This problem was very similar to subarray sums ll and was solved in a similar fashion. The only difference with this problem was that, instead of finding a target sum, 
we needed to make sure that the sum with divisible by an integer n. To do so, I found all my variables mod n and added n to take in consider the negative case. 

*/
