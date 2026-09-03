#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	
	while(true){
	    cin >> n;
	    if(n==0){
	        break;
	    }
	    
	    queue<int> cartas;
	    vector<int> descartadas;
	    for(int i=1;i<=n;i++){
	        cartas.push(i);
	    }
	    
	    while(cartas.size()>2){
	        descartadas.push_back(cartas.front());
	        cartas.pop();
	        cartas.push(cartas.front());
	        cartas.pop();
	    }
	    cout << "Discarded cards: ";
	    for(int i=0;i<descartadas.size();++i){
	        cout << descartadas[i] << ", ";
	    }
	    cout << cartas.front() << "\n";
	    cout << "Remaining card: " << cartas.back() << "\n";
	}
	
    return 0;
}
