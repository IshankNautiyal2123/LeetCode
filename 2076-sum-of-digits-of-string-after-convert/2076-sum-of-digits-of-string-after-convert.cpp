class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        string a = "";

        for (int i = 0; i < s.size(); i++) {
            int n = (s[i] - 'a' + 1);
            a += to_string(n);
        }
        while (k > 0) {
            sum = 0;
            for (int i = 0; i < a.size(); i++) {
                sum += a[i] - '0';
            }
            a = to_string(sum);
            k--;
        }
        return sum;
    }
};