class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        int temp = x;
        while (temp != 0) {
            if ( INT_MAX/10 < reverse || reverse == INT_MAX/10 && temp > 7 ) {
                return 0;    
            } 
            if (INT_MIN/10 > reverse || reverse == INT_MIN/10 && temp < -8) {
                return 0;
            }
            reverse = reverse*10 + temp%10;
            temp = temp/10;
            
        }
    return reverse;
    }
};