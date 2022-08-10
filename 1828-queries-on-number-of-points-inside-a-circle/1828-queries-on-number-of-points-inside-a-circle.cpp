class Solution {
public:
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
vector<int> res(queries.size(), 0);
    for(int i=0;i<queries.size();++i)
    {
    	int x = queries[i][0];
    	int y = queries[i][1];
    	int radius = queries[i][2];

    	for(int j = 0; j<points.size();++j)
    	{
    		// Distance Formula Between any two points:: (D)^2 = (x1 - x2)^2 + (y1 - y2)^2
    		if((x - points[j][0]) * (x - points[j][0]) + (y - points[j][1]) * (y - points[j][1]) <= (radius * radius))
    			res[i]++;
    	}
    }
    return res;
}
    
};