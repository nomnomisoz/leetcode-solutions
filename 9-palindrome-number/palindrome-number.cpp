class Solution {
public:
    bool isPalindrome(int x) {
       
       if (x<0) {
            return false;
       }

       long long rev = 0;
       long long temp = x;

       while (temp!= 0) {
            rev = rev*10 + temp%10;
            temp = temp/10;
       }
       cout <<x <<"\n" <<rev;
       if (x == rev) {
            return true;
       } else {
            return false;
       }
    }
};