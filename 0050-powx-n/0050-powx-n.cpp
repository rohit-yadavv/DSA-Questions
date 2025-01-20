class Solution {

private:
    double myPowHelper(double x, int n) {
        if (n == 0)
            return 1;
        double half = myPowHelper(x, n / 2);
        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }

public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1;
        if (n < 0) {
            x = 1 / x;
            n = -(n + 1); // Avoid overflow by adjusting n
            return x * myPow(x, n);
        }
        return myPowHelper(x, n);
    }
};
