bool collinear(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3) {
    long long area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    // to get actual area, divide this by 2
    if (area == 0)
        return true;
    return false;
}
