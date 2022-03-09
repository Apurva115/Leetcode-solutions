class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left_boundary = 0; // while moving to left
        int right_boundary = matrix[0].size()-1;
        int bottom_boundary = matrix.size()-1;
        int top_boundary = 0;
        int total_elements = matrix.size() * matrix[0].size();
        vector<int> spiral;
        int right =0;
        int top =0;
        int bottom =0;
        int left =0;
        int i =0;
        while(i< total_elements)
        {
            right = top_boundary;
            while(right <= right_boundary && i< total_elements)
            {
                spiral.push_back(matrix[top_boundary][right]);
                right++;
                i++;
                
            }
            top_boundary++;
            bottom = top_boundary;
            while(bottom <= bottom_boundary && i< total_elements )
            {
                spiral.push_back(matrix[bottom][right_boundary]);
                bottom++;
                i++;
            }
            right_boundary--;
            left =right_boundary;
            while(left >= left_boundary && i< total_elements)
            {
                spiral.push_back(matrix[bottom_boundary][left]);
                left--;
                i++;
            }
            bottom_boundary--;
            top = bottom_boundary;
            while(top >= top_boundary && i< total_elements)
            {
                spiral.push_back(matrix[top][left_boundary]);
                top--;
                i++;
            }
            left_boundary++;
           
            
        }
        return spiral;
        
        
    }
};