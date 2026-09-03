#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> c(3,0);
	vector<int> f(3,0);
	
	for(int i=0;i<3;++i){
	    cin >> c[i];
	}
	for(int i=0;i<3;++i){
	    cin >> f[i];
	}
	
	int cp, fp;
	cp=3*c[0]+c[1];
	fp=3*f[0]+f[1];
	
	if(cp>fp){
	    cout << 'C' << "\n";
	}
	else if(fp>cp){
	    cout << 'F' << "\n";
	}else{
	    if(c[2]>f[2]){
	        cout << 'C' << "\n";
	    }
	    else if(f[2]>c[2]){
	        cout << 'F' << "\n";
	    }
	    else{
	        cout << '=' << "\n";
	    }
	}
	
    return 0;
