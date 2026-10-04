class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        long long temp = x;
        while (temp != 0) {
            reverse = reverse*10 + temp%10;
            temp = temp/10;
        }
        if ( INT_MIN <= reverse && reverse <= INT_MAX) {
            return reverse;
        } else {return 0;}    
    }
};