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
#define FASTIO ios::sync_with_stdio(0); cin.tie(0)


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

///  TEMPLATE   OVER   ///

///----------ANSWER -------------------------------///


template<class T1, class T2, class T3> void show(T1 e1, T2 e2, T3 e3)
{
	cout << "YES" << endl;
    cout << e1 << " " << e2 << " " << e3 << endl;
}


void Answer() {
    int x,y,z;
    cin >> x >> y >> z;
    
    if(x == y && y == z) {
		show(x,x,x);
	}
	else if( x!=y && y!=z && x!=z) {
		cout << "NO" << endl;
	}
	else if((x>y && y == z) || (y>z && x == z) || (z>y && y == x) ){
		cout << "NO" << endl;
	}
	else if(x<y) {
		show(x,x,y);
	}
	else if(y<z) {
		show(y,y,z);
	}
	else if(z<x) {
		show(x,z,z);
	} 
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
