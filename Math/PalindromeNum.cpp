class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int reverse =0;
        while (num > 0){
            int d = num % 10;
            num /= 10;
            if(reverse > INT_MAX/10 || (reverse == INT_MAX/10 && d > 7)){
                return false;
            }
            if(reverse < INT_MIN/10 || (reverse == INT_MIN/10 && d < -8)){
                return false;
            }
            reverse = reverse*10 + d;
        }
        if(reverse == x) return true;
        else return false;
    }
};