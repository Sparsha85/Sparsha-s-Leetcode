class Solution {
public:
    
    int find(vector<vector<int>> matrix, int i, int mid){
        auto temp = upper_bound(matrix[i].begin(), matrix[i].end(), mid);
        return temp - matrix[i].begin();
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector <int> v;
        int n = matrix.size();
        int lower_val = matrix[0][0];
        int higher_val = matrix[n-1][n-1];
        
        while(lower_val < higher_val){
            int mid_val = lower_val + (higher_val - lower_val)/2;
            int counter = 0;
            for(int i = 0; i < n; i++){
                counter = counter + find(matrix, i, mid_val);
            }
            
            if(counter < k){
                lower_val = mid_val+1;
            } else {
                higher_val = mid_val;
            }
        }
        
        return lower_val;
    }
};