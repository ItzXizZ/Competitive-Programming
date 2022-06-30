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
Logic of solution: Instead of creating a prefix_sum array, I just used a variable [pref] for convienence. Manipulating the prefix sums equation pref[r]-pref[l-1]=sum,
we can get, pref[l-1]=pref[r]-sum; (note that the variable pref represents the pref[r] here). Now, we need to find if a prefix sum equal to pref[r]-sum 
exists to the left. To store the past prefix sums, I used a map called prefCount. We add the prefix sum after each continuation of the for loop. If there 
are past prefix sums of value pref[r]-sum, then we add however many occurences to a counter variable labled ans.

The main "take-aways" from this problem were probably the use of a map to keep track of the past prefix sums and to remember to add prefCount[0] to account for the case
when a valid prefix starts from the start of the array. 

*/
