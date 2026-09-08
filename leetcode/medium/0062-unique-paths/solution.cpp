class Solution {
public:
    int Helper(int x,int y)
    {
        if(x==0 && y==0)
            return 1;
        if(x<0 || y<0)
            return 0;
        return Helper(x,y-1) + Helper(x-1,y);
    }
    int uniquePaths(int m, int n) {
       return Helper(m-1,n-1);

        
    }
};