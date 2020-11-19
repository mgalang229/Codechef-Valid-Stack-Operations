#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int o=0;
		bool ok=1;
		for(int i=0; i<n; ++i) {
			int a;
			cin >> a;
			if(a==1)
				o++;
			else if(a==0&&o>0)
				o--;
			else if(a==0&&o<=0)
				ok=0;
		}
		cout << (ok?"Valid":"Invalid") << "\n";
	}
}
