#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n, num, pat, cont=1, maior_cont=0;
	cin >> n;
	
	for(int i=0;i<n;++i){
	    cin >> num;
	    if(i==0){
	        pat=num;
	    }
	    else if(num == pat){
	        cont++;
	    }
	    else{
	        if(cont>maior_cont){
	            maior_cont=cont;
	        }
	        cont=1;
	        pat=num;
	    }
	}
    if(cont>maior_cont){
        maior_cont=cont;
    }	
	cout << maior_cont << "\n";
	
    return 0;
}
