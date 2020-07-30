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
#include<iostream>
#include<algorithm>
#include<sstream>
#include<cstdlib>

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

///----------ANSWER -------------------------------///



void Answer() {
    
	int n;
	cin >> n;
	string inc,out;
	cin >> inc >> out;
    char ar[51][51];
    for(int i=0;i<n;i++) {
		ar[i][i] = 'Y';
		for(int j=i+1;j<n;j++) {
			if(ar[i][j-1] == 'Y' && inc[j] == 'Y' && out[j-1] == 'Y') {
				ar[i][j] = 'Y';
			}
			else {
				ar[i][j] = 'N';
			}
		}
		for(int j=i-1;j>=0;j--) {
			if(ar[i][j+1] == 'Y' && inc[j] == 'Y' && out[j+1] == 'Y') {
				ar[i][j] = 'Y';
			}
			else {
				ar[i][j] = 'N';
			}
		}
	}
	
	
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout << ar[i][j];
		}
		cout << endl;
	}
  
}

int main() {
		
    FASTIO;
    
    int t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
		cout << "Case #" << i << ": " << endl;
        Answer();
    }
    return 0;
}
