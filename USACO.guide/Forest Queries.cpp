#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	ll n,q;
	cin>>n>>q;
    vector<vector<ll>> a(n , vector<ll> (n+1)); 
	for(ll i=0; i<n; i++){
		a[i][0]=0;
	}
	for(ll i=0; i<n; i++){
		for(ll j=1; j<=n; j++){
			char num;
			cin>>num;
			ll num2;
			if(num=='*') {
				num2=1;
			} else {
				num2=0;
			}	
			a[i][j]=num2+a[i][j-1];
		}
	}
	for(ll i=0; i<q; i++){
		ll x,y,x1,y1;
		cin>>y>>x>>y1>>x1;
		ll cnt=0; 
		cnt=a[y-1][x1]-a[y-1][x-1]+a[y1-1][x1]-a[y1-1][x-1];
		if(y==y1){
			cout<<cnt/2<<"\n";
		} else {
			cout<<cnt<<"\n";
		}
	}
	return 0;
}
 
