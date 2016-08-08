#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll count(ll a[], ll n,  ll v)
{
	ll store[v+1];
	memset(store,0,sizeof(store));
	store[0] = 1;
	for(ll i=0; i<n; i++)
		for(ll j=a[i];  j<=v; j++)
			store[j] += store[j-a[i]];
	return store[v];
}

int main(void)
{
	ll v, n;
	cin >> v >> n;
	ll a[n];
	for(ll i=0; i<n; i++)
		cin >> a[i];
	cout << count(a, n, v) << endl;
	return 0;
}
