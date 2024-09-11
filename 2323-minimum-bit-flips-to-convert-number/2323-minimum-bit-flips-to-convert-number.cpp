class Solution {
public:
    
    int minBitFlips(int start, int goal) {
        int cnt =0 ;
        while(start>0 and goal > 0)
        {
            int val = start%2 ;
            int val1 = goal%2 ;
            if(val!=val1)cnt++;
            start/=2;
            goal/=2;
        }
        while(start > 0)
        {
            int val = start%2 ;
            if(val == 1)cnt++;
            start/=2;
        }
        while(goal > 0)
        {
            int val = goal%2 ;
            if(val == 1)cnt++;
            goal/=2;
        }
        return cnt;
    }
};