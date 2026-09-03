#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> c(3,0);
	vector<int> p(2,0);
	
	for(int i=0;i<3;++i){
	    cin >> c[i];
	}
	for(int i=0;i<2;++i){
	    cin >> p[i];
	}
	
	sort(c.begin(), c.end());
	sort(p.begin(), p.end());
	
	if(c[0]<=p[0] && c[1]<=p[1]){
	    cout << 'S' << "\n";
	}
	else{
	    cout << 'N' << "\n";
	}
	
	
    return 0;
}
