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

///  TEMPLATE   OVER   ///

///----------ANSWER -------------------------------///

typedef pair<int, int> pp; 
#define pro priority_queue

struct cmp {
	bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
		int lena = a.second-a.first+1;
		int lenb = b.second-b.first+1;
		if (lena == lenb) return a.first > b.first;
		return lena < lenb;
	}
};


void Answer() {
	
	int n;
	cin >> n;
	
	vector<int> v(n,0);
    
    pro<pp, vector<pp>,cmp> qq;
	qq.push({0,n-1});
	for(int i=1; i<=n; i++) {
		pp t = qq.top();
		int len = t.second-t.first;
		int pos = t.first+(len/2);
		v[pos] = i;
		if(pos>t.first)
			qq.push({t.first,pos-1});
		if(pos<t.second)
			qq.push({pos+1,t.second});
		
		qq.pop();
	}
	
	js(v);
	
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
