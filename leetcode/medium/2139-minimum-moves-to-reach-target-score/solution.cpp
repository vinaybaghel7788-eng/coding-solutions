class Solution {
public:
    int minMoves(int t, int d) {
        if(t==1)
            return 0;
        if(d==0)
            return t-1;
        if(d>0 && t%2==0)
            return 1+minMoves(t/2,d-1);
        else
            return 1+minMoves(t-1,d);
    }
};