int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    int negative = (dividend < 0) != (divisor < 0);
    long long a = llabs((long long)dividend), b = llabs((long long)divisor), quotient = 0;
    while (a >= b) {
        int shift = 0;
        while (a >= (b << (shift + 1))) shift++;
        a -= b << shift;
        quotient += 1LL << shift;
    }
    return negative ? -quotient : quotient;
}
