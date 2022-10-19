#include<bits/stdc++.h>
 
using namespace std;
 
void fastio() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int sol(int n) {
	if(n <= 1) {
		return n;
	}
	return sol(n-1)+sol(n-2);
}
 
int main() {
 
	fastio();
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		for(int i=0; i<=n; i++) {
			cout<<sol(i)<<" ";
		}
	}
 
	return 0;
}