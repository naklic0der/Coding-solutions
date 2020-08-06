/**
 *    author:  nakli_c0der     
**/
///   TEMPLATE STARTED   /////

///HEADER FILES///

#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<iostream>
#include<algorithm>
#include<sstream>
#include<cstdlib>
#include<complex>
#include<iomanip>
#include<utility>
#include<bitset>
#include<list>
#include<assert.h>
#include<numeric>
#include<fstream>
using namespace std;

///DEFINES///

#define ll long long 
#define PP pair<ll, pair<ll, ll>>
#define MOD ((ll int)(1e9+7))
#define endl "\n"
#define MAX(a,b) ( (a) > (b) ? (a) : (b))
#define MIN(a,b) ( (a) < (b) ? (a) : (b))
#define ALL(a) a.begin(), a.end()
#define REV(a) a.rbegin(), a.rend()
#define FASTIO ios::sync_with_stdio(0); cin.tie(0)
#define check(x) cout<<"CHECK = "<<#x<<"\n";
#define jsf(arr) cout<< "--> " << #arr << ": ";for(auto x: arr) {cout << x <<" ";} cout <<endl;


///TEMPLATES///
template<class T1>void deb(T1 e)
{
    cout <<"-->"<< e << endl;
}
template<class T1, class T2> void deb(T1 e1, T2 e2)
{
    cout <<"-->"<< e1 << " " << e2 << endl;
}
template<class T1, class T2, class T3> void deb(T1 e1, T2 e2, T3 e3)
{
    cout <<"-->"<< e1 << " " << e2 << " " << e3 << endl;
}
template<class T1, class T2, class T3, class T4> void deb(T1 e1, T2 e2, T3 e3, T4 e4)
{
    cout <<"-->"<< e1 << " " << e2 << " " << e3 << " " << e4 << endl;
}
template<class T1, class T2, class T3, class T4, class T5> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5)
{
    cout <<"-->"<< e1 << " " << e2 << " " << e3 << " " << e4 << " " << e5 << endl;
}
template<class T1, class T2, class T3, class T4, class T5, class T6> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5, T6 e6)
{
    cout <<"-->"<< e1 << " " << e2 << " " << e3 << " " << e4 << " " << e5 << " " << e6 << endl;
}

template<class T1>void js(T1 arr)
{
    for(auto x: arr) {
		cout << x <<" "; 
	}
    cout <<endl;
}

template<class T1, class T2, class T3>void js(T1 arr,T2 start,T3 end)
{
    for(auto it=start;it!=end;it++) {
		cout << *it <<" "; 
	}
    cout <<endl;
}


void read(vector<int> &v) {
	int N = (int)v.size();
	for(int i=0; i<N; i++) {
		cin >> v[i];	
	}
}


///  TEMPLATE   OVER   ///

///----------ANSWER -------------------------------///

#define ar array

void Answer() {
    
	int n, k;
	cin >> n >> k;
	
	map<int,int> mp;
	set<ar<int,2>> s;
	for(int i=0; i<n; i++) {
		int a;
		cin >> a;
		++mp[a];
	}
	
	for(auto x: mp) {
		s.insert({x.second,x.first});
	}
	
	//for(auto x: s)
		//cout << x[0] << ' ' << x[1] << endl;
	//cout << endl;
	
	ll score = 0;
	vector<int> ans;
	
	auto just = s.end();
	just--;
	int mini = (*just)[0];
	//int mini = 2;
	
	while(mini>=1) {
		auto it = s.end();
		score = 0;
		//deb(k,score,mini);
		ans.clear();
		bool enter = true;
		while(score<k*mini && enter) {
			--it;
			if(it == s.begin())
				enter = false;
			int a = ((*it)[0]/mini)*mini;
			score += a;
			int len = int(k-(int(ans.size())));
			for(int m=0;m<(min(len,((*it)[0]/mini)));m++)
				ans.emplace_back((*it)[1]);
			//deb(score);
		}
		//jsf(ans);
		--mini;
		if(int(ans.size()) == k) {
			break;
		}
	}
	
	js(ans);
    
}

int main() {
		
    FASTIO;
    
    int t = 1;
    //cin>>t;
    while(t--)
    {
        Answer();
    }
    return 0;
}
