#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, x, sum=0;
	
	cin >> n;
	vector<int> lista;
	for(i=0;i<n;i++){
	    cin >> x;
	    if(x != 0){
	        lista.push_back(x);
	    }
	    else if(x==0 && !lista.empty()){
	        lista.pop_back();
	    }
	    else{
	        continue;
	    }
	}
	for(i=0;i<lista.size();i++){
	    sum += lista[i];
	}
	cout << sum;
}
