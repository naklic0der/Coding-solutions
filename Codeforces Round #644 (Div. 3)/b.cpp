#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		vector<int> v;
		int n; 
		cin >> n;
		for(int i=0; i<n; i++) {
			int a;
			cin >> a;
			v.emplace_back(a);
		}

		sort(v.begin(),v.end());

		int ans=INT_MAX;
		for(int i=0; i+1<n; i++) {
			ans = min(ans,v[i+1]-v[i]);
		}

		cout << ans << endl;
		

	}




	return 0;
}
