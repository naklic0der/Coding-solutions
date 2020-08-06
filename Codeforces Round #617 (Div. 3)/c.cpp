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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<ar<int,2>,int> mp;
    mp[{0,0}] = 0;
    int posx=0,posy=0;
    int ct = 1;
    int a=1,b=n;
    bool ok = false;
    for(int i=0; i<n; i++) {
		int dx=0,dy=0;
		if(s[i]=='L') {
			dx = -1;
		}
		if(s[i]=='R') {
			dx = 1;
		}
		if(s[i]=='U') {
			dy = 1;
		}
		if(s[i]=='D') {
			dy = -1;
		}
		posx += dx;
		posy += dy;
		//check(map);
		//for(auto x: mp) 
			//deb((x.first)[0],(x.first)[1],x.second);
		//cout << endl;
		if(mp.find({posx,posy})!=mp.end()) {
			ok = true;
			//check(answer);
			//deb(mp[{posx,posy}]);
			int c = mp[{posx,posy}]+1;
			int d = ct;
			if(d-c<b-a) {
				a = c;
				b = d;
			}
			mp[{posx,posy}] = ct;
			++ct;
		} else {
			mp[{posx,posy}] = ct;
			++ct;
		}
		
	}
	if(ok)
		cout << a << ' ' << b << endl;
	else
		cout << "-1" << endl;
 
    
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
