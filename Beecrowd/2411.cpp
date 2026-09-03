#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n, j, acc=0;
	cin >> n;
	pair<int, int> c = {4, 3};
	
	for(int i=0;i<n;++i){
	    cin >> j;
	    switch(j){
	        case 1:
	            c.first++;
	            c.second+=2;
	            acc++;
	            break;
            case 2:
                c.first+=2;
                c.second++;
                acc++;
                break;
            case 3:
                c.first+=2;
                c.second--;
                acc++;
                break;
            case 4:
                c.first++;
                c.second-=2;
                acc++;
                break;
            case 5:
                c.first--;
                c.second-=2;
                acc++;
                break;     
            case 6:
                c.first-=2;
                c.second--;
                acc++;
                break;  
            case 7:
                c.first-=2;
                c.second++;
                acc++;
                break;
            case 8:
                c.first--;
                c.second+=2;
                acc++;
                break; 
	    }
	    if((c.first==1&&c.second==3)||(c.first==2&&c.second==3)||(c.first==2&&c.second==5)||(c.first==5&&c.second==4)){
	        break;
	    }
	}
	
	cout << acc << "\n";
	
    return 0;
}
