class Solution {
public:
    int sum_digits(int n){
        int sm = 0;
        while(n){
            sm += (n % 10) * (n % 10);
            n /= 10;
        }
        return sm;
    }
    bool isHappy(int n) {
        int slow = -1, fast = -2;
        while(slow != fast){
            if(slow == -1) slow = fast = n;
            slow = sum_digits(slow);
            fast = sum_digits(sum_digits(fast));
        }
        return slow == 1;
    }
};