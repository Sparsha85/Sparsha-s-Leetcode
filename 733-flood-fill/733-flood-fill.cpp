


class Solution {
public:
    void helper( vector<vector<int>>&image, int i, int j, int newColor, int existing_color)
     {
        if(i < 0 or i >= image.size() or j < 0 or j >= image[0].size() or image[i][j]!= existing_color or image[i][j]==newColor)
            return;
        
        image[i][j] = newColor;
        helper( image, i-1, j, newColor, existing_color);
        helper(image, i, j+1, newColor, existing_color);
        helper(image, i+1, j, newColor, existing_color);
        helper(image, i, j-1, newColor, existing_color);
     }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int existing_color = image[sr][sc];
        helper(image, sr, sc, newColor, existing_color);
        
        return image;
    }
};

/*
class Solution {
public:
	void dfs(vector<vector<int>>& image,int sr,int sc,int newColor,int x)
	{
		if(sr<0 or sr>=image.size() or sc<0 or sc>=image[0].size() or image[sr][sc]!=x or image[sr][sc]==newColor)return;

		image[sr][sc]=newColor;
		dfs(image,sr-1,sc,newColor,x);
		 dfs(image,sr,sc+1,newColor,x);
		 dfs(image,sr+1,sc,newColor,x);
		 dfs(image,sr,sc-1,newColor,x);
	}
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
	int x=image[sr][sc];
	dfs(image,sr,sc,newColor,x);
	return image;
	}
};
*/