#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	string s;
	
	for(int i=0;i<n;++i){
	    int c=0, acc=0;
	    cin >> s;
	    for(int j=0;j<s.size();++j){
	        if(s[j]=='.'){continue;}
	        else{
	            if(s[j]=='<'){
	               c++;
	            }else{
	                if(c>0){
	                    c--;
	                    acc++;
	                }
	                else{
	                    continue;
	                }
	            }
	        }
	    }
	    cout << acc << "\n";
	}
	
	return 0;
}
