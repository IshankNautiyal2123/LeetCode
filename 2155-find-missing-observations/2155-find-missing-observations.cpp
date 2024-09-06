class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> res;
        int sum = 0;
        int mtotal = rolls.size();
        int total = mtotal + n;
        for(int i=0; i < mtotal; i++){
            sum = sum + rolls[i];
        }
        int rem = (mean * total) - sum;
        if(rem <= 6*n && rem >= n){
            int b = rem/n;
            int x = rem % n;
            if((rem % n)>=1 && (rem % n)<n){
                for(int i = 1;i <= x; i++){
                    int k = b+1;
                    res.push_back(k);
                }
            }
            for(int i = 1;i <= n - x; i++){
                res.push_back(b);
            }
        } 
        return res;
    }
};