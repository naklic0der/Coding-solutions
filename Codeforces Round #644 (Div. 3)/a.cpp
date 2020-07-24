#include<iostream>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	int a,b;
	while(t--) {
		int side = 0;
		cin >> a >> b;
		if(a == b)
			side=a*2;
		else if( a<b && a*2 >= b ) 
			side=a*2;
		else if( b<a && b*2 >= a ) {
			side=b*2;
		}
		else if( a>b ) 
			side = a;
		else 
			side = b;
		
		cout << side*side << endl;
	}


	return 0;
}
