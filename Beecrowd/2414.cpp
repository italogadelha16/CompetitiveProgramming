#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num, maior = 0;
	
	while(cin >> num){
	    if(num == 0) break;
	    else if(num > maior) maior = num;
	}
	
	cout << maior << "\n";
	
    return 0;
}
