#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>

#define ll long long 
#define vi vector<int>
#define pi pair<int,int>

#define F first
#define S second
#define PP pair<ll, pair<ll, ll>>
#define PB push_back
#define MP make_pair
#define MOD ((ll int)(1e9+7))
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"
#define MAX(a,b) ( (a) > (b) ? (a) : (b))
#define MIN(a,b) ( (a) < (b) ? (a) : (b))
#define ALL(a) a.begin(), a.end()
#define FASTIO ios::sync_with_stdio(0); cin.tie(0)
// #define MAX 300005

using namespace std;

// ll power(ll x, ll y);

// ll gcd(ll a, ll b);

void Answer() {
    
    int a,b;
    cin >> a >> b;
    
    if(a*2<=b)
        cout << a << ' ' << 2*a << endl;
    else
        cout << "-1 -1" << endl;
    
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
