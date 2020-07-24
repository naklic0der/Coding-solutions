#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main () {

	int t;
	cin >> t;
	while(t--) {

		int n;
		cin >> n;
		vector<int> v;
		int count=0;
		for( int i=0; i<n; i++ ) {
			int a; 
			cin >> a;
			v.emplace_back(a);
			if(a&1)
				count++;
		}

		if(count&1^1)
			cout << "YES" << endl;
		else {
			int flag =0;
			sort(v.begin(),v.end());
			for(int i=0; i+1<n; i++) {
				if(v[i+1]-v[i] == 1) {
					cout << "YES" << endl;
					flag = 1;
					break;
				}
			}
			if(!flag)
				cout << "NO" << endl;
		}

	}
	return 0;
}
