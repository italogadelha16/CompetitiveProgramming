class Solution {
public:
    bool isValid(string s) {
        
        stack<char> p;
        if(s[0]==')'||s[0]==']'||s[0]=='}'){return false;}
        if(s.size()==1){return false;}
        for(int i=0;i<s.size();++i){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){p.push(s[i]);}
            else{
                if(p.empty()){return false;}
                if(s[i]==')'){
                    if(p.top()!='('){return false;}
                    else{p.pop();}
                }
                else if(s[i]==']'){
                    if(p.top()!='['){return false;}
                    else{p.pop();}
                }
                else if(s[i]=='}'){
                    if(p.top()!='{'){return false;}
                    else{p.pop();}
                }
            }
        } 
        if(p.empty()){return true;}
        else{return false;}
    }
};
