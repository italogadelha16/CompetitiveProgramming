class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> tri(numRows, vector<int>(1,1));

        for(int i=1;i<numRows;++i){
            tri[i].resize(i+1);
            for(int j=0;j<i+1;++j){
                if(j==i || j==0){
                    tri[i][j] = 1;
                }
                else{
                    tri[i][j] = tri[i-1][j-1]+tri[i-1][j];
                }
            }                        
        }

        return tri;
    }
};
