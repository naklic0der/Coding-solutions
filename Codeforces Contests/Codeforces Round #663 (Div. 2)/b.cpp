/**
 *    author:  nakli_c0der     
**/
///   TEMPLATE STARTED   /////

///HEADER FILES///

#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <complex>
#include <iomanip>
#include <utility>
#include <bitset>
#include <list>
#include <assert.h>
#include <numeric>
#include <fstream>
using namespace std;

///DEFINES///

#define ll long long 
#define PP pair<ll, pair<ll, ll>>
#define MOD ((ll int)(1e9+7))
#define endl "\n"
#define MAX(a,b) ( (a) > (b) ? (a) : (b))
#define MIN(a,b) ( (a) < (b) ? (a) : (b))
#define ALL(a) a.begin(), a.end()
#define RALL(a) a.rbegin(), a.rend()
#define FASTIO ios::sync_with_stdio(0); cin.tie(0)
#define check(x) cout<<"CHECK = "<<#x<<"\n";
#define jsf(arr) cout<< "--> " << #arr << ": ";for(auto xxxx: arr) {cout << xxxx <<" ";} cout <<endl;
#define cones(x) __builtin_popcount(x); // count num of ones in a number

/// CONSTANTS ///
const int INF = (int) 1e9;
const long long INF64 = (long long) 1e18;
const long double eps = 1e-9;
const long double pi = 3.14159265358979323846;

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

// Errichto debugger
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
 //debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }
//  debug() << imie(mp) imie(i);  method to debug
// Errichto debugger ends

template<class T> T max(T a, T b, T c) {
    return max(a, max(b, c));
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

void fill(vector<int> &v, int N) {
	for(int i=0; i<N; i++) {
		v[i] = 0;	
	}
}


///  TEMPLATE   OVER   ///

///----------ANSWER -------------------------------///



void Answer() {
	int n,m;
	cin >> n >> m;
	string s[n];
	int ans = 0;
	for(int i=0; i<n; i++) {
		cin >> s[i];
		if(s[i][m-1]=='R')
			++ans;
	}
		
	for(int i=0; i<m;i++ ) {
		if(s[n-1][i]=='D')
			++ans;
	}
    
    cout << ans << endl;
}

int main() {
		
    FASTIO;
    
    int t = 1;
    cin>>t;
    while(t--)
    {
        Answer();
    }
    return 0;
}
