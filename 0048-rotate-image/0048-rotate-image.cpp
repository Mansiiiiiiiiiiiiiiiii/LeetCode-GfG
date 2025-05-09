class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
      int n=mat.size();

      //transpose
      for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
      }  
      //reverse
      for(int i=0; i<n; i++){
        reverse(mat[i].begin(), mat[i].end());
      }
    }
};